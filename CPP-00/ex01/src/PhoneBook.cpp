#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

std::string	PhoneBook::getVal(const std::string &name)
{
	std::string	command;

	while (command.length() == 0)
	{
		std::cout << name;
		std::getline(std::cin, command);
		if (std::cin.eof())
			std::exit(1);
	}
	return (command);
}

int	PhoneBook::positiveAtoi(std::string n)
{
	if (n.length() != 1 || (n[0] < '0' && n[0] > '7'))
		return (-1);
	return (n[0] - '0');
}

void	PhoneBook::dotPrinting(std::string str)
{
	if(str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << str;
	return ;
}

void	PhoneBook::setContact()
{
	tab[index % 8].setFirstName(getVal("First Name: "));
	tab[index % 8].setLastName(getVal("Last Name: "));
	tab[index % 8].setNickname(getVal("Nickname: "));
	tab[index % 8].setPhoneNumber(getVal("Phone Number: "));
	tab[index % 8].setDarkestSecret(getVal("Darkest Secret: "));

	index++;
}


void PhoneBook::displayContact()
{
	int	i = 0;
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|First Name| Last Name|  Nickname| Phone Num|";
	while (i < index && i < 8)
	{
		std::cout << std::endl;
		std::cout << "|";
		dotPrinting(tab[i].getFirstName());
		std::cout << "|";
		dotPrinting(tab[i].getLastName());
		std::cout << "|";
		dotPrinting(tab[i].getNickname());
		std::cout << "|";
		dotPrinting(tab[i].getPhoneNumber());
		std::cout << "|";
		i++;
	}
}


void	PhoneBook::displaySecret()
{
	std::string	command;
	int input;

	std::cout << std::endl;
	std::cout << "Type an index: ";
	std::getline(std::cin, command);
	input = positiveAtoi(command);
	if (input < 0 || input + 1 > index || input > 7)
		std::cout << "Error: Bad index." << std::endl;
	else
		std::cout << tab[input].getDarkestSecret() << std::endl;
}
