/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:40:26 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/10 13:15:34 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../Weapon.hpp"

Weapon::Weapon( std::string type ) {
	std::cout << "Constructor called" << std::endl;
	this->_type = type;
	return ;
}

Weapon::~Weapon( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Weapon::setType( std::string newtype) {
	this->_type = newtype;
	return ;
}

const std::string	&Weapon::getType( void ) {
	return (this->_type);
}