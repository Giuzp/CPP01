/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:20:41 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/08 14:20:41 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// include
# include <string>
# include <iostream>

class Zombie {
	private:
		std::string name;

	public:
		//constructor
		Zombie(std::string _name);
		//destructor
		~Zombie();
		//announce
		void	announce(void);

};

#endif
