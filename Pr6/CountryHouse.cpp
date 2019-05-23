#include "pch.h"
#include "CountryHouse.h"

double CountryHouse::taxes()
{
	Property::taxes();
	return worth / 500;
}

CountryHouse::CountryHouse(int w)
	:Property(w)
{}
