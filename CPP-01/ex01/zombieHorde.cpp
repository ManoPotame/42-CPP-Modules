#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*x;

	x = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		x[i].setZ(name);
	}
	return (x);
}
