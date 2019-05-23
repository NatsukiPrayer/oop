#pragma once
#include "pch.h"
#include "Property.h"
#ifndef CAR_H
#define CAR_H
class Car : public Property {
public:
	Car(int w);
	double taxes();
};
#endif