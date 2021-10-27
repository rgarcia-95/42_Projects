/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:54:30 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/19 13:58:25 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "weapon.hpp"

class HumanA
{
	public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack(void);

	private:

	std::string _name;
	Weapon &_weapon;
};

#endif