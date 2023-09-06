/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:35:34 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/10 13:09:48 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private :
		Weapon		&_weapon;
		std::string	_name;
	public :
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );
		void	attack( void );
};

#endif