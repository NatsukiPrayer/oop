
#pragma once
#ifndef VECTOR_H
#define VECTOR_H
#include "pch.h"
#include <vector>
#include <string>

using namespace std;

class Vector {
public:
	Vector(double, double, double);
	void module();
	void set_name(string);
	string get_name();
	double get_module();
	void printInfo(void);
private:
	string name;
	double n;
	double sempai;
	double x;
	double y;
	double z;
};
#endif;

