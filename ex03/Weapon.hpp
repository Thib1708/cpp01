/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:28:41 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/10 13:15:43 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
	private :
		std::string _type;
	public :
		Weapon( std::string type );
		Weapon( void );
		~Weapon( void );
		const std::string	&getType( void );
		void				setType( std::string new_type);
};

#endif