/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:42:09 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/10 11:54:27 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main (void)
{
	Zombie *zombies;
	
	zombies = zombieHorde(10, "Bob");
	for (int i = 0; i < 10; i++)
		zombies[i].annonce();
	delete [] zombies;
	return 0;
}