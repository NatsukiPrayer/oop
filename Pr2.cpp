//4 вариант
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, x, y, t, l, s;
	cout << "Enter a:";
	cin >> a;
	cout << "Enter x:";
	cin >> x;
	if ((a - x) == 0) { // нужно при исходе (a > y), строка 41
		cout << "Divison by zero exception, re-enter x:";
		cin >> x;
	}
	if (cos(a*x) == 0) { // нужно при исходе (a < y), строка 47
		cout << "Divison by zero exception, re-enter x:";
		cin >> x;
	}


	if (a <= x) {
		if ((x + a) <= 0) { //По условию задания числа даются константами, но проверка не навредит
			cout << "logarithmic argument must be greater than zero\n";
			cout << "module operation was used on logarhmic argument\n";
			l = abs(x + a);
		}
		y = a + log(l);
	}
	else {
		if (sin(a*x) < 0) {
			cout << "Square root arguement exception\n";
			cout << "Sin(a*x) must be greater than zero, module operation was used on sin(a*x)\n";
			s = sin(a * x);
			s = abs(s);
		}
		y = sqrt(s);
	}

	if (a > y)
		t = y / (a - x);
	else if (a == y)
		t = (y / (a - x)) + ((a + x) / pow(y, 2));
	else
		t = (sin(a*x)) / cos(a*x) + cos(2 * a*y);
	cout << "a:" << a << endl;
	cout << "x:" << x << endl;
	cout << "y:" << y << endl;
	cout << "t:" << t << endl;
}