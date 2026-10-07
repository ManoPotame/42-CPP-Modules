#pragma once
#include <iostream>
#include <string>

class	Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:
		//Getters
		std::string const	getFirstName() const;
		std::string const	getLastName() const;
		std::string const	getNickname() const;
		std::string const	getPhoneNumber() const;
		std::string const	getDarkestSecret() const;
		//Setters
		void	setFirstName(std::string const &);
		void	setLastName(std::string const &);
		void	setNickname(std::string const &);
		void	setPhoneNumber(std::string const &);
		void	setDarkestSecret(std::string const &);
};
