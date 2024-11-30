/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:49:47 by jgasparo          #+#    #+#             */
/*   Updated: 2024/11/30 20:44:45 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(): _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int		Fixed::getRawBits(void) const
{
	return _fixedPoint;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "getRawBits member function called" << std::endl;
	_fixedPoint = raw;
}

Fixed&	Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = fixed.getRawBits();
	return *this;
}

Fixed::Fixed(const int itofp)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = itofp << _fractionalBits;
}

Fixed::Fixed(const float ftofp)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = roundf(ftofp * (1 << _fractionalBits));
}

float	Fixed::toFloat(void) const
{
	return (float)_fixedPoint / (float)(1 << _fractionalBits); 
}

int		Fixed::toInt(void) const
{
	return _fixedPoint >> _fractionalBits;
}

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return o;
}
