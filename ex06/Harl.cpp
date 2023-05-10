/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:41:06 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/10 16:12:34 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl( void ) {
	std::cout << "Constructor called" << std::endl;
	return ;
}
Harl::~Harl( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	std::cout << std::endl;
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

typedef void (Harl::*tab_func)(void);

void	Harl::complain( std::string level) {
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	tab_func func[4] = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int i;
	for (i = 0; i < 4; i++)
		if (levels[i] == level)
			break ;
	switch (i) {
		case 0: {
			(this->*(func[0]))();
		}
		case 1: {
			(this->*(func[1]))();
		}
		case 2: {
			(this->*(func[2]))();
		}
		case 3: {
			(this->*(func[3]))();
			break ;
		}
		default : {
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		}
	}
}