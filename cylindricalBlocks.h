#ifndef CYLINDRICALBLOCKS_H
#define CYLINDRICALBLOCKS_H

#include "/home/tracy/projects/LAB4/sqrBaseRectBlocks.h"



class cylindricalBlocks : public sqrBaseRectBlocks
{
    public:
        cylindricalBlocks();
        cylindricalBlocks(int,int);
        void set_values(int,int);
		int diameter,length;
		double getArea();
		double getCylindricalArea();
};

#endif
