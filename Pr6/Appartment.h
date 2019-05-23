#pragma once
#include "pch.h"
#include "Property.h"
#ifndef APPARTMENT_H
#define APPARTMENT_H

class Appartment : public Property {
public:
	double taxes();
	Appartment(int w);
};
#endif // !APPARTMENT_H
