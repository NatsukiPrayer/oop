
#include "pch.h"
#include <iostream>
#include "Property.h"
#include "Car.h"
#include "CountryHouse.h"
#include "Appartment.h"

int main()
{
	Property **p = new Property *[7];
	p[0] = new Appartment(2000000);
	p[1] = new Appartment(3000000);
	p[2] = new Appartment(4000000);
	p[3] = new CountryHouse(2500000);
	p[4] = new CountryHouse(1500000);
	p[5] = new Car(200000);
	p[6] = new Car(300000);
	for (int i = 0; i < 7; i++) {
		std::cout << "Object " << i << " has " << p[i]->taxes() << " taxes " << std::endl;
	}
	delete[] p;
}
