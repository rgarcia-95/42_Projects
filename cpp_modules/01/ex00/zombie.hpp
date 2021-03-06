/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:34:18 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/14 16:41:01 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:

	Zombie(std::string name);
	~Zombie();
	void announce(void);

	private:

	std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif