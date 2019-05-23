#include "pch.h"
#include "Parrot.h"

Parrot::Parrot(std::string n)
	:name(n)
{}

void Parrot::give_pat()
{
	std::cout << name << " said to you: Good human"  << std::endl;
}
