#include "PhoneBook.hpp"

int	main(void)
{
	std::string	command;
	PhoneBook	phone_book;

	while (1)
	{
		if (std::cin.eof())
			return (1);
		std::cout << "Please, enter a command: " << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			phone_book.setContact();
			// Ajouter command a l'objet contact

		}
		if (command == "SEARCH")
		{
			phone_book.displayContact();
			phone_book.displaySecret();
		}
		if (command == "EXIT")
			return (0);
	}
}
