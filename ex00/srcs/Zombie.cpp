/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:27:37 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/08/31 09:46:01 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {
	std::cout << "Constructor called" << std::endl;
	this->_name = name;
	return ;
}

Zombie::~Zombie( void ) {
	std::cout << this->_name  << "'s destructor called "<< std::endl;
	return ;
}

void	Zombie::annonce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}