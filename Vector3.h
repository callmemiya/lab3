#ifndef Vector3_h
#define Vector3_h
#include "Vector.h"
class Vector3 : public Vector {
    int z;
public:
    Vector3(int x,int y,int z): Vector(x,y);
    void print();
};
#endif /*Vector3_h*/
