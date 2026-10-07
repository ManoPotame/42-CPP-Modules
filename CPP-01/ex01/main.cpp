#include "Zombie.hpp"

int main()
{
	int	N = 12;
	std::string name = "Foo";
	Zombie *horde;

	horde = zombieHorde(N, name);
	delete[] horde;
}
