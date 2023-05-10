/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:46:47 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/10 16:11:02 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argv[1])
		harl.complain(argv[1]);
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (0);
}