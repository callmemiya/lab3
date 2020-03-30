#ifndef Vector_h
#define Vector_h
#include <iostream>
using namespace std;
class Vector{
protected:
    int x,y;
public:
    Vector();
    Vector(int x,int y);
    virtual void print();
};
#endif /*Vector_h*/
