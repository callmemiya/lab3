#include "Vector.h"
using namespace std;
Vector::Vector(int x,int y){
  this->x=x;
  this->y=y;
}
virtual void Vector::print(){
  cout <<"\n" <<x <<";" <<y;
}
Vector3(int x,int y,int z): Vector(x,y){
  this->z=z;
}
void Vector::print(){
  Vector::print();
  cout <<";" <<z;
}
