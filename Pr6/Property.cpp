#include "pch.h"
#include "Property.h"

Property::Property(int w)
	:worth(w)
{}

double Property::taxes()
{
	return worth;
}



