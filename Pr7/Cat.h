#pragma once
#include "pch.h"
#include "Animal.h"
#ifndef CAT_H
#define CAT_H

class Cat : Animal {
public:
	Cat(std::string n);
	void give_pat();
private:
	std::string name;
};
#endif // !CAT_H

