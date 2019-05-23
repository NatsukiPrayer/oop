#pragma once
#include "pch.h"
#include "Property.h"
#ifndef COUNTRYHOUSE_H
#define COUNTRYHOUSE_H
class CountryHouse : public Property {;
public:
	double taxes();
	CountryHouse(int w);
};
#endif // !COUNTRYHOUSE_H

