/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:58:55 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/11/02 13:47:25 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed() : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int raw) : _raw(round(raw * (1 << this->_bits)))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float raw) : _raw(round(raw * (1 << this->_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

void Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

Fixed &Fixed::operator = (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(fixed.getRawBits());
	return (*this);
}

int Fixed::toInt(void) const
{
	return ((int) this->_raw / (int) (1 << this->_bits));
}

float Fixed::toFloat(void) const
{
	return ((float) this->_raw / (float) (1 << this->_bits));
}

std::ostream &operator << (std::ostream &o, const Fixed &obj)
{
	o << obj.toFloat();
	return (o);
}