#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::~Zombie()
{
	std::cout << "The horde has been deleted" << std::endl;
}

void	Zombie::setZ(std::string name)
{
	_name = name;
}
