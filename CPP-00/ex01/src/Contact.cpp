#include "Contact.hpp"

//Getters
std::string const Contact::getFirstName() const
{
	return (_firstName);
}

std::string const	Contact::getLastName() const
{
	return(_lastName);
}

std::string const	Contact::getNickname() const
{
	return (_nickname);
}
std::string const	Contact::getPhoneNumber() const
{
	return (_phoneNumber);
}
std::string const	Contact::getDarkestSecret() const
{
	return (_darkestSecret);
}

//Setters
void	Contact::setFirstName(std::string const &input)
{
	_firstName = input;
}
void	Contact::setLastName(std::string const &input)
{
	_lastName = input;
}
void	Contact::setNickname(std::string const &input)
{
	_nickname = input;
}
void	Contact::setPhoneNumber(std::string const &input)
{
	_phoneNumber = input;
}
void	Contact::setDarkestSecret(std::string const &input)
{
	_darkestSecret = input;
}
