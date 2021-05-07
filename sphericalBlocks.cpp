#include "/home/tracy/projects/LAB4/sphericalBlocks.h"
#include <math.h>

void sphericalBlocks::set_values(int a)
{
    diameter=a;
    height=a;
    length=a;
}

double sphericalBlocks::getArea()
{
	double pi = 2 * acos(0.0);
	double radius = diameter/2;
	double area= 4*pi*radius*radius;
	return area;
}


double sphericalBlocks::getVol()
{
	double pi = 2 * acos(0.0);
	double radius = diameter/2;
	double volume = (4/3)*pi*radius*radius*radius;
	return volume;
}
