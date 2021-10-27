/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:07:02 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/19 11:57:03 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int	main(void)
{
	int		n = 5;
	Zombie	*zombie = zombieHorde(n, "\nNew Zombie Horde is coming!\n");

	for (int i = 0; i < n; i++)
		zombie[i].announce();
	delete[] zombie;
	std::cout << std::endl;
	return (0);
}