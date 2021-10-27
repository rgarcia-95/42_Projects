/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:27:36 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/14 18:37:48 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int	main(void)
{
	std::cout << "\nSTACK 1" << std::endl;
	randomChump("Zombie 1");
	randomChump("Zombie 2");
	std::cout << "\nHEAP 1" << std::endl;
	Zombie	*zombie_3 = newZombie("Zombie 3");
	Zombie	*zombie_4 = newZombie("Zombie 4");
	delete zombie_3;
	delete zombie_4;
	std::cout << "\nSTACK 2" << std::endl;
	randomChump("Zombie 5");
	randomChump("Zombie 6");
	std::cout << "\nHEAP 2" << std::endl;
	Zombie	*zombie_7 = newZombie("Zombie 7");
	Zombie	*zombie_8 = newZombie("Zombie 8");
	delete zombie_7;
	delete zombie_8;
	return (0);
}