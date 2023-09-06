/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:23:20 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/10 11:15:58 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	
	private :
		std::string	_name;
	public :
		Zombie( std::string name );
		~Zombie( void );
		void	annonce( void );
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif