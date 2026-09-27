/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 22:02:33 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 22:02:33 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
//definitions
# define HUMANA_HPP
//includes
# include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon&		weapon;
	public:
		HumanA(std::string _name, Weapon& _weapon);
		~HumanA();
		void	attack(void);
};

#endif
