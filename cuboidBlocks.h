#ifndef CUBOIDBLOCKS_H
#define CUBOIDBLOCKS_H

#include "sqrBaseRectBlocks.h"


class cuboidBlocks : public sqrBaseRectBlocks
{
    public:
        cuboidBlocks();
        cuboidBlocks(int);
        void set_values(int);
		int width,height,length;
    protected:

    private:
        
};

#endif
