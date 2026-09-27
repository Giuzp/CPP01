/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 20:24:37 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 20:24:37 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
//definitions
# define WEAPON_HPP
//includes
# include <string>
# include <iostream>

class Weapon {
	private:
		std::string	type;
	public:
		Weapon();
		Weapon(std::string _type);
		~Weapon();
		const std::string&	getType(void);
		void			setType(std::string _type);
};

#endif