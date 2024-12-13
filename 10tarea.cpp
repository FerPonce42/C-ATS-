#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float a,b,c, formula1, formula2;

    cout<<"Ingrese a: ";cin>>a;
    cout<<"Ingrese b: ";cin>>b;
    cout<<"Ingrese c: ";cin>>c;

    formula1 = ((-1)*b +sqrt((b*b)-(4*a*c))) / (2 * a);
    formula2 = ((-1)*b -sqrt((b*b)-(4*a*c))) / (2 * a);
    cout<<"x1:  "<<formula1<<"   x2:  "<<formula2;
    
}