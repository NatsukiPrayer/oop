#include "pch.h"
#include "Car.h"

Car::Car(int w)
	:Property(w)
{}

double Car::taxes()
{
	Property::taxes();
	return worth/200;
}


