#include <iostream>

class	Fixed
{
	private:
		int					_fixed;
		static const int	_fractBits = 8;

	public:
		Fixed();
		Fixed(const Fixed&	input);
		Fixed&	operator=(const Fixed& value);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
