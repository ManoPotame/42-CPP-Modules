#include <iostream>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie(void);
	~Zombie();
	void	setZ(std::string str);

};

Zombie *zombieHorde(int N, std::string name);
