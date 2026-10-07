#include "HumanA.hpp"
//	Initialisation de la reference Weapon (Weapon& type), après l'initialisation
//	il est obligatoire de de lui attribuer une valeur, on appel donc le
//	constructeur par defaut (:_weapon(type)) qui va set toutes les valeurs de
//	type a dans _weapon.
//	Pour rappel: Une reference designe une reference a une autre variable
//	DEJA EXISTANTE, une reference ne peut donc pas etre nulle. D'ou le fait
//	que (comme une variable de type const) ont doit lui assigner une valeur au
//	meme endroit que son initialisation !!
HumanA::HumanA(std::string input, Weapon& type):_name(input), _weapon(type){} //Initialisation de liste.

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << _name;
	std::cout << " attacks with their ";
	std::cout << _weapon.getType() << std::endl;
}
