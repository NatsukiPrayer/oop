#include "pch.h"
#include "Dog.h"

Dog::Dog(std::string n)
	:name(n)
{}

void Dog::give_pat()
{
	std::cout << "Dog " << name << " is wagging it's tail from happiness"<< std::endl;
}
