/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:46:47 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/06 10:55:22 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc == 2)
		harl.complain(argv[1]);
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (0);
}    