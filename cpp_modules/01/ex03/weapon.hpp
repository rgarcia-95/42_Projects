/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:34:23 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/19 14:32:12 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:

	Weapon();
	Weapon(std::string type);
	~Weapon();
	std::string const &getType(void) const;
	void setType(std::string type);

	private:

	std::string _type;
};

#endif