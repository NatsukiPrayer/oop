#include "pch.h"
#include "vector.h"
#include <cmath>
#include <iostream>


Vector::Vector(double xv, double yv, double zv)
	:x(xv), y(yv), z(zv) {
	x = xv;
	y = yv;
	z = zv;
}


void Vector::set_name(string nam) {
	name = nam;
}
string Vector::get_name() {
	return name;
}
void Vector::module() {
	std::cout << name << " module is " << n << endl;
}
double Vector::get_module() {
	n = sqrt((x*x)+(y*y)+(z*z));
	return n;
}
void Vector::printInfo() {
	std::cout << name << ": x = " << x << ", y = " << y << ", z = " << z << endl << name << " module is " << n << endl;
}

