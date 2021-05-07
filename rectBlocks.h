#ifndef RECTBLOCKS_H
#define RECTBLOCKS_H

#include <iostream>

using namespace std;

class rectBlocks
{

    public:
        rectBlocks();
        rectBlocks(int a,int b,int c);
        void set_values (int,int,int);
        friend ostream & operator << (ostream& os, const rectBlocks& r);
    protected:

    private:
        int width,height,length;


};
#endif
