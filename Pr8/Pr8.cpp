// Pr8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream> 
using namespace std;


int main()
{
	string temp;
	char buff[15];
	ifstream fin("NeverOpenThis1.txt");
	while (!fin.eof()) {
		fin >> buff;
		cout << buff << endl;
	}
	fin.close();
	return 0;
}

