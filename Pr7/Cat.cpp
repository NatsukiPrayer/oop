#include "pch.h"
#include "Cat.h"

Cat::Cat(std::string n)
	:name(n)
{}

void Cat::give_pat()
{
	std::cout << "Cat " << name << " is purring from pleasure" << std::endl;
}
