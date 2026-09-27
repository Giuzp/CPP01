/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 20:24:43 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 20:24:43 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//Constructor
Weapon::Weapon() {}
Weapon::Weapon(std::string _type) : type(_type) {}

//Destructor
Weapon::~Weapon() {}

//Get the weapon type
const std::string&	Weapon::getType(void) {
	const std::string& typeRef = this->type;
	return typeRef;
}

void	Weapon::setType(std::string _type) {
	this->type = _type;
}
