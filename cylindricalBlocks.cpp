#include "cylindricalBlocks.h"
#include <math.h>

void cylindricalBlocks::set_values(int a,int b)
{
    diameter=a;
    length=b;
}

double cylindricalBlocks::getArea()
{
	double pi = 2 * acos(0.0);
	double radius = diameter/2;
	double area = (2*pi*radius*length)+(2*pi*radius*radius);
	return area;
}

double cylindricalBlocks::getCylindricalArea()
{
	double pi = 2 * acos(0.0);
	double radius = diameter/2;
	double carea= 2*pi*radius*length;
	return carea;
}
