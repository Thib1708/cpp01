/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:44:59 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/10 13:17:37 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon) : _weapon(weapon) {
	std::cout << "Constructor called" << std::endl;
	this->_name = name;
	this->_weapon = weapon;
	return ;
}

HumanA::~HumanA( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	HumanA::attack( void ) {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	return ;
}