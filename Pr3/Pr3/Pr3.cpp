#include "pch.h"
#include <iostream>
#include "vector.h"

int main()
{
	double k, l;
	Vector a(4, 3, 1);
	Vector b(2, 1, 1);
	a.set_name("a");
	b.set_name("b");
	k = a.get_module();
	l = b.get_module();
	std::cout << "Sum of modules is " << k + l << endl;
	a.printInfo();
	b.printInfo();
	return 0;
}

