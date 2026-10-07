#include <iostream>

int	main()
{
	std::string	stringVAR = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringVAR;
	std::string	&stringREF = stringVAR;

	std::cout << "Memory Adresses:" << std::endl;
	std::cout << "stringVAR: ";
	std::cout << &stringVAR << std::endl;
	std::cout << "stringPTR: ";
	std::cout << stringPTR << std::endl;
	std::cout << "stringREF: ";
	std::cout << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "Values:" << std::endl;
	std::cout << "stringVAR: ";
	std::cout << stringVAR << std::endl;
	std::cout << "stringPTR: ";
	std::cout << *stringPTR << std::endl;
	std::cout << "stringREF: ";
	std::cout << stringREF << std::endl;
}
