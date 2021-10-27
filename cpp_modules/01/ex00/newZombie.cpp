/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:10:34 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/14 18:10:50 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name);

	return (zombie);
}