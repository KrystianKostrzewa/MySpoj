#include <iostream>
#include <cstdlib>
#include <cmath>
#include "functions.hpp"

#define SMALL_NUMBER 0.005

class Point
{
private:
	double x;
	double y;

	friend int check_unilin(Point A, Point B, Point C);
};

int check_unilin(Point A, Point B, Point C)
{
	double a = (A.y - B.y)/(A.x - B.x);
	double b = A.y - A.x * a;

	if (fabs(C.y - (a * C.x + b)) < SMALL_NUMBER) return 1;
	else return 0;
}