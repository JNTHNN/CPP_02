/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:44:47 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/04 22:11:23 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPoint;
		const static int	_fractionalBits;

	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int itofp);
		Fixed(const float ftofp);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		Fixed& operator=(Fixed const &fixed);
		
		/* COMPARAISON OPERATORS */
		bool	operator>(Fixed const &compared) const;
		bool	operator<(Fixed const &compared) const;
		bool	operator>=(Fixed const &compared) const;
		bool	operator<=(Fixed const &compared) const;
		bool	operator==(Fixed const &compared) const;
		bool	operator!=(Fixed const &compared) const;

		/*	ARYMETHIC OPERATORS	*/
		Fixed	operator+(Fixed const &add) const;
		Fixed	operator-(Fixed const &add) const;
		Fixed	operator*(Fixed const &add) const;
		Fixed	operator/(Fixed const &add) const;

		/*	INCREMENT OPERATORS	*/
		Fixed	&operator++(void);
		Fixed	operator++(const int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
};

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed);

#endif
