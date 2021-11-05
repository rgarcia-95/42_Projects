/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:44:23 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/11/03 13:37:51 by rgarcia-         ###   ########.fr       */
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
	Fixed operator ++ ();
	Fixed operator ++ (int i);
	Fixed operator -- ();
	Fixed operator -- (int i);
	Fixed operator + (const Fixed &fixed);
	Fixed operator - (const Fixed &fixed);
	Fixed operator * (const Fixed &fixed);
	Fixed operator / (const Fixed &fixed);
	bool operator > (const Fixed &fixed) const;
	bool operator < (const Fixed &fixed) const;
	bool operator >= (const Fixed &fixed) const;
	bool operator <= (const Fixed &fixed) const;
	bool operator == (const Fixed &fixed) const;
	bool operator != (const Fixed &fixed) const;
	static Fixed const &max(const Fixed &a, const Fixed &b);
	static Fixed const &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);

	private:

	int _raw;
	static const int _bits = 8;
};

std::ostream &operator << (std::ostream &o, const Fixed &obj);

#endif