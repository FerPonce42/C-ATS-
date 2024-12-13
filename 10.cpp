#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float x,y,expresion;

    cout<<"Ingrese x: ";cin>>x;
    cout<<"Ingrese y: ";cin>>y;

    expresion = sqrt(x)/((y*y)-1);

    cout<<"EL RESULTADO ES: "<<expresion;
}