#ifndef SPHERICALBLOCKS_H
#define SPHERICALBLOCKS_H

#include "cuboidBlocks.h"


class sphericalBlocks : public cuboidBlocks
{
    public:
        sphericalBlocks();
        sphericalBlocks(int);
        void set_values(int);
		int diameter,height,length;
		double getArea();
        double getVol();
        
};

#endif
