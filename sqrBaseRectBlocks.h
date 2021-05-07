#ifndef SQRBASERECTBLOCKS_H
#define SQRBASERECTBLOCKS_H

#include "/home/tracy/projects/LAB4/rectBlocks.h"



class sqrBaseRectBlocks : public rectBlocks
{
    public:
        sqrBaseRectBlocks();
        sqrBaseRectBlocks(int,int);
        void set_values(int,int);
        int width,height,length;
    protected:

    private:
        
};

#endif
