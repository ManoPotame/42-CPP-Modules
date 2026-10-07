#include "Fixed.hpp"

Fixed::Fixed(): _fixed(0)
{
	std::cout<< "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& input):_fixed(input.getRawBits())
{
	std::cout<< "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& value)
{
	if (&value != this)
		this->_fixed = getRawBits();
	std::cout << "Copy assignment called" << std::endl;
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed = raw;
}

Fixed::~Fixed()
{
	std::cout<< "Destructor called" << std::endl;
}


