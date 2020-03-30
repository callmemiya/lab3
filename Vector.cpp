#include "Vector.h"
using namespace std;
Vector::Vector() {
  x = 0;
  y = 0;
}
Vector::Vector(int x,int y){
  this->x=x;
  this->y=y;
}
virtual void Vector::print(){
  cout <<"\n" <<x <<";" <<y;
}
