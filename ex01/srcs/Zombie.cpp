/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:27:37 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/08/31 09:48:38 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "Constructor called" << std::endl;
	return ;
}

Zombie::~Zombie( void ) {
	std::cout << this->_name << "'s destructor called" << std::endl;
	return ;
}

void	Zombie::annonce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::give_name( std::string name) {
	this->_name = name;
	return ;
}