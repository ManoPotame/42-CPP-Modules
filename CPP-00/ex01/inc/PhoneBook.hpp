#pragma once
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <string>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact		tab[8];
		int			index;
		std::string	getVal(const std::string &name);
		int			positiveAtoi(std::string n);
		void		dotPrinting(std::string str);
	public:
		PhoneBook();
		void	setContact();
		void	displayContact();
		void	displaySecret();
};
