/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:23:20 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/10 11:44:38 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	
	private :
		std::string	_name;
	public :
		Zombie( void );
		~Zombie( void );
		void	annonce( void );
		void	give_name( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif