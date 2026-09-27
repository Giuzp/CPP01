/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 20:11:03 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 20:17:28 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//Constructor
Weapon::Weapon() {}
Weapon::Weapon(std::string _type) : type(_type) {}

//Destructor
Weapon::~Weapon() {}

//Get the weapon type
std::string&	Weapon::getType(void) {
	std::string& typeRef = this->type;
	return typeRef;
}

void	Weapon::setType(std::string _type) {
	this->type = _type;
}
