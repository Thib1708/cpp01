/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:24:20 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/06 10:46:59 by tgiraudo         ###   ########.fr       */
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
	std::ifstream infile;
	std::ofstream outfile;
	
	std::string line;
	std::string file = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string::size_type pos = 0;
	infile.open(argv[1], std::ios::in);
	if (infile.fail())
	{
		std::cout << "[ERROR] : " << file << " can't be open" << std::endl;
		return (1);
	}
	outfile.open(file.append(".replace").c_str());
	if (outfile.fail())
	{
		std::cout << "[ERROR] : " << file << " can't be open" << std::endl;
		return (1);
	}
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