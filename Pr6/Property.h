#pragma once
#ifndef PROPERTY_H
#define PROPERTY_H
class Property {
protected:
	int worth;
public:
	Property(int w);
	virtual double taxes() = 0;
};
#endif

