/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:53:31 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/11/03 13:33:59 by rgarcia-         ###   ########.fr       */
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

Fixed Fixed::operator ++ ()
{
	this->_raw++;
	return (*this);
}

Fixed Fixed::operator ++ (int i)
{
	Fixed	temp(*this);

	(void)i;
	this->operator++();
	return (temp);
}

Fixed Fixed::operator -- ()
{
	this->_raw--;
	return (*this);
}

Fixed Fixed::operator -- (int i)
{
	Fixed	temp(*this);

	(void)i;
	this->operator--();
	return (temp);
}

Fixed Fixed::operator + (const Fixed &fixed)
{
	this->setRawBits(this->getRawBits() + fixed.getRawBits());
	return (*this);
}

Fixed Fixed::operator - (const Fixed &fixed)
{
	this->setRawBits(this->getRawBits() - fixed.getRawBits());
	return (*this);
}

Fixed Fixed::operator * (const Fixed &fixed)
{
	Fixed	temp(*this);
	long	aux1, aux2;

	aux1 = (long)this->getRawBits();
	aux2 = (long)fixed.getRawBits();
	temp.setRawBits((aux1 * aux2) / (1 << this->_bits));
	return (temp);
}

Fixed Fixed::operator / (const Fixed &fixed)
{
	Fixed	temp(*this);
	long	aux1, aux2;

	aux1 = (long)this->getRawBits();
	aux2 = (long)fixed.getRawBits();
	temp.setRawBits((aux1 * (1 << this->_bits)) / aux2);
	return (temp);
}

bool Fixed::operator > (const Fixed &fixed) const
{
	return (this->_raw > fixed.getRawBits());
}

bool Fixed::operator < (const Fixed &fixed) const
{
	return (this->_raw < fixed.getRawBits());
}

bool Fixed::operator >= (const Fixed &fixed) const
{
	return (this->_raw >= fixed.getRawBits());
}

bool Fixed::operator <= (const Fixed &fixed) const
{
	return (this->_raw <= fixed.getRawBits());
}

bool Fixed::operator == (const Fixed &fixed) const
{
	return (this->_raw == fixed.getRawBits());
}

bool Fixed::operator != (const Fixed &fixed) const
{
	return (this->_raw != fixed.getRawBits());
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}