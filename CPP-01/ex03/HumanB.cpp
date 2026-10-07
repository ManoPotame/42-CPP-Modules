#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name), _weapon(NULL){}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	_weapon = &newWeapon;
}

void	HumanB::attack()
{
	std::cout << _name;
	std::cout << " attacks with their ";
	std::cout << _weapon->getType() << std::endl;
}
