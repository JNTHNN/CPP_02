/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:49:47 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/04 21:58:05 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(): _fixedPoint(0)
{
	return;
}

Fixed::Fixed(const Fixed& fixed)
{
	*this = fixed;
	return;
}

Fixed::~Fixed()
{
	return;
}

int		Fixed::getRawBits(void) const
{
	return _fixedPoint;
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPoint = raw;
}

Fixed::Fixed(const int itofp)
{
	_fixedPoint = itofp << _fractionalBits;
}

Fixed::Fixed(const float ftofp)
{
	_fixedPoint = (int)roundf(ftofp * (1 << _fractionalBits));
}

float	Fixed::toFloat(void) const
{
	return (float)_fixedPoint / (float)(1 << _fractionalBits); 
}

int		Fixed::toInt(void) const
{
	return _fixedPoint >> _fractionalBits;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a >= b)
		return b;
	return a;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return a;
	return b;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a >= b)
		return b;
	return a;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a >= b)
		return a;
	return b;
}

/*	Operateur d'assignation	*/
Fixed&	Fixed::operator=(Fixed const &fixed)
{
	this->_fixedPoint = fixed.getRawBits();
	return *this;
}

/*	Operateur d'insertion	*/

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return o;
}

/*	Operateurs de Comparaison	*/

bool	Fixed::operator>(Fixed const &compared) const
{
	return this->_fixedPoint > compared._fixedPoint;
}

bool	Fixed::operator<(Fixed const &compared) const
{
	return this->_fixedPoint < compared._fixedPoint;
}

bool	Fixed::operator>=(Fixed const &compared) const
{
	return this->_fixedPoint >= compared._fixedPoint;
}

bool	Fixed::operator<=(Fixed const &compared) const
{
	return this->_fixedPoint <= compared._fixedPoint;
}

bool	Fixed::operator==(Fixed const &compared) const
{
	return this->_fixedPoint == compared._fixedPoint;
}

bool	Fixed::operator!=(Fixed const &compared) const
{
	return this->_fixedPoint != compared._fixedPoint;
}



/*	Operateurs Arimethiques	*/

Fixed	Fixed::operator+(Fixed const &add) const
{
	return (Fixed(this->toFloat() + add.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &add) const
{
	return (Fixed(this->toFloat() - add.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &add) const
{
	return (Fixed(this->toFloat() * add.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &add) const
{
	return (Fixed(this->toFloat() / add.toFloat()));
}


/*	Operateurs d'incrementation	*/

/*	Pre incrementation	*/
Fixed	&Fixed::operator++(void)
{
	this->_fixedPoint++;
	return *this;
}

/*	Post incrementation	*/
Fixed	Fixed::operator++(const int)
{
	Fixed	temp = *this;
	++*this;
	return temp;
}

/*	Pre decrementation	*/
Fixed	&Fixed::operator--(void)
{
	this->_fixedPoint--;
	return *this;
}

/*	Post decrementation	*/
Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	--*this;
	return temp;
}
