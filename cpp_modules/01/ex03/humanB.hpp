/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:04:57 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/19 14:29:30 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "weapon.hpp"

class HumanB
{
	public:

	HumanB(std::string name);
	~HumanB();
	void attack(void) const;
	void setWeapon(const Weapon &weapon);

	private:

	std::string _name;
	const Weapon *_weapon;
};

#endif