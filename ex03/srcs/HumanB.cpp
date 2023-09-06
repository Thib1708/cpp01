/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:57:00 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/06 10:24:56 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

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
	if (!this->_weapon)
	{
		std::cout << this->_name << " has no weapon" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon( Weapon &weapon) {
	this->_weapon = &weapon;
	return ;
}