/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:50:31 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/11/02 12:58:02 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <string>
#include <iostream>

class Fixed
{
	public:

	Fixed();
	Fixed(const int raw);
	Fixed(const float raw);
	Fixed(const Fixed &fixed);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed &operator = (const Fixed &fixed);
	int toInt(void) const;
	float toFloat(void) const;

	private:

	int _raw;
	static const int _bits = 8;
};

std::ostream &operator << (std::ostream &o, const Fixed &obj);

#endif