/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:21:50 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/19 11:34:40 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:

	Zombie();
	~Zombie();
	void announce(void);
	void set(std::string name);

	private:

	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif