#include "Vector.h"
#include "Vector3.h"
Vector3(int x,int y,int z): Vector(x,y){
  this->z=z;
}
void Vector::print(){
  Vector::print();
  cout <<";" <<z;
}
