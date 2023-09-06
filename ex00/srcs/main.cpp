/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:42:09 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/10 11:19:27 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main (void)
{
	Zombie zombie1("Bob");
	Zombie *zombie2;
	
	zombie2 = newZombie("Karl");
	randomChump("Mike");
	zombie1.annonce();
	zombie2->annonce();
	delete zombie2;
	return 0;
}