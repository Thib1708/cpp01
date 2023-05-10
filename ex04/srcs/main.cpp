/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:24:20 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/10 14:27:34 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong amount of argument" << std::endl;
		std::cout << "Usage: <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::fstream infile;
	std::fstream outfile;
	
	std::string line;
	std::string file = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string::size_type pos = 0;
	infile.open(file, std::ios::in);
	outfile.open(file.append(".replace"), std::ios::out);
	
	while (!infile.eof())
	{
		getline(infile, line);
		pos = line.find(s1);
		while (pos !=std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1);
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
}