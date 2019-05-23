#pragma once
#include "pch.h"
#include "Animal.h"
#ifndef DOG_H
#define DOG_H

class Dog : Animal {
public:
	Dog(std::string n);
	void give_pat();
private:
	std::string name;
};
#endif // !DOG_H
