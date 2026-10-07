#include <iostream>
#include <cmath>

class Fixed
{
private:
		int					_fixed;
		static const int	_fractBits = 8;
public:

	Fixed();
	Fixed(const Fixed&	input);
	Fixed(const int& value);
	Fixed(const float value);
	~Fixed();
	Fixed&		operator=(const Fixed& value);
	int			getRawBits( void ) const;
	void		setRawBits( int const raw );
	float		toFloat() const;
	int			toInt() const;

};
	std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

