#pragma once
#include "pch.h"
#include "Animal.h"
#ifndef PARROT_H
#define PARROT_H

class Parrot : Animal {
public:
	Parrot(std::string n);
	void give_pat();
private:
	std::string name;
};

#endif // !PARROT_H
