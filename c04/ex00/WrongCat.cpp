#include "WrongCat.hpp"

// Constructeur / destructeurs
WrongCat::WrongCat(void)
{
	std::cout << "Constructor Default WrongCat called"<< std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src)
{
	std::cout << "Constructor Bycopy WrongCat called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor WrongCat" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	std::cout << "Operator= WrongCat called" << std::endl;
	this->type = src.type;
	return (*this);
}

// fonctions membres
void WrongCat::makeSound(void) const
{
	std::cout << "WrongMiaou" << std::endl;
}
