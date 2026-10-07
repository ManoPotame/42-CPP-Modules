#include "Zombie.hpp"

Zombie::Zombie(std::string appellation)
{
	name = appellation;
}

Zombie::~Zombie()
{
	std::cout << "Zombie has been destructed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
