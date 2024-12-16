/*
Escriba un programa que lea de la 
entrada estandar los dos catetos 
de un triangulo rectangulo y escriba
la salida estandar su HIPOTENUSA
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float a,b,c;

    cout<<"CATE ADYACENTE: "; cin>>a;
    cout<<"CATE OPUESTO  : "; cin>>b;

    c = sqrt((a*a)+(b*b));

    cout<<"LA HIPOTENUSA ES: "<< c << endl;
}