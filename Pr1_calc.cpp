

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char operation;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter operation: ";
	cin >> operation;

	switch (operation)
	{
	case '-':
		std::cout << "a - b = " << a - b << '\n';
		break;
	case '+':
		std::cout << "a + b = " << a + b << '\n';
		break;
	case '*':
		std::cout << "a * b = " << a * b << '\n';
		break;
	case '/':
		while (b == 0) {
			cout << "Devision by zero exception, re-enter b:";
			cin >> b;
		}
		std::cout << "a / b = " << a / b << '\n';
		break;
	default:
		std::cout << "Wrong operation\n";
	}
	return 0;
}


