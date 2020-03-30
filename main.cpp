#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
class Vector{
protected:
    int x,y;
public:
    Vector() {
        x = 0;
        y = 0;
    }
    Vector(int x,int y){
        this->x=x;
        this->y=y;
    }
    virtual void print(){
        cout <<"\n" <<x <<";" <<y;
    }
};
class Vector3 : public Vector {
    int z;
public:
    Vector3(int x,int y,int z): Vector(x,y){
        this->z=z;
    }
    void print(){
        Vector::print();
        cout <<";" <<z;
    }
};
int main(){
    Vector* vector;
    vector = new Vector(1, 2);
    vector->print();
    vector = new Vector3(4,5,6);
    vector->print();
    delete vector;
    return 0;
}
