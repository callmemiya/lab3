#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main(){
    Vector* vector;
    vector = new Vector(1, 2);
    vector->print();
    vector = new Vector3(4,5,6);
    vector->print();
    delete vector;
    return 0;
}
