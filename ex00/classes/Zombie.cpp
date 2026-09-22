/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:42:34 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/22 14:42:34 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//constructor
Zombie::Zombie(std::string _name) : name(_name) {}
//destructor
Zombie::~Zombie() {};

//Announce
void	Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}