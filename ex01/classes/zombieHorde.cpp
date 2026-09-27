/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:54:22 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 16:55:45 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	if (N <= 0)
		return NULL;
	Zombie*	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setname(name);
	return horde;
}
