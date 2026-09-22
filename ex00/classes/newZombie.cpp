/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:43:21 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/22 11:45:26 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	Zombie *zombo = new(std::nothrow) Zombie(name);
	return zombo;
}
