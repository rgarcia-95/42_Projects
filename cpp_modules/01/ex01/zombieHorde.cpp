/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:27:12 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/19 11:51:32 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	std::string	str = "Zombie ";
	Zombie	*horde = new Zombie[N];

	std::cout << name << std::endl;
	for (int i = 0; i < N; i++)
		horde[i].set(str + std::to_string(i + 1));
	return (horde);
}