/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:57:00 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/10 13:16:59 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../HumanB.hpp"

HumanB::HumanB( std::string name) {
	std::cout << "Constructor called" << std::endl;
	this->_name = name;
	this->_weapon = NULL;
	return ;
}

HumanB::~HumanB( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	HumanB::attack( void ) {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon( Weapon &weapon) {
	this->_weapon = &weapon;
	return ;
}