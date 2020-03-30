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
class Vector3 : public Vector {
    int z;
public:
    Vector3(int x,int y,int z): Vector(x,y);
    void print();
};
#endif /*Vector_h*/
