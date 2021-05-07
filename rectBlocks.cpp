#include "/home/tracy/projects/LAB4/rectBlocks.h"
#include <iostream>

using namespace std;

void rectBlocks::set_values(int a, int b, int c){
    width=a;
    height=b;
    length=c;
}


ostream & operator << (ostream &os, const rectBlocks& m)
{
    os<<"The rectangle's parameters are: "<<m.width <<" " << m.height<<" " << m.length<<endl;
    return os ;
}
