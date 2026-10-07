#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie;
	std::string	name = "Foo";
	zombie = newZombie(name);
	zombie->announce();
	delete zombie;
	randomChump(name);
}
