#include "pch.h"
#include "Appartment.h"

double Appartment::taxes()
{
	Property::taxes();
	return worth / 1000;
}

Appartment::Appartment(int w)
	:Property(w)
{
}
