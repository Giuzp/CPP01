/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:53:33 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 16:53:33 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// include
# include <string>
# include <iostream>
# include <new>

//Zombie class
class Zombie {
	private:
		std::string name;

	public:
		//constructor
		Zombie(std::string _name);
		Zombie();
		//destructor
		~Zombie();
		//announce
		void	announce(void);
		//set name
		void	setname(std::string name);

};

//New zombie function
Zombie* newZombie(std::string name);
//random chump
void	randomChump(std::string name);
//zombie horde
Zombie*	zombieHorde(int N, std::string name);

#endif
