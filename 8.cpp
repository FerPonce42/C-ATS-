/*
Escriba un fragmento de programa que intercambie
los valores de dos variables. Un swap supongo.

*/
#include <iostream>
using namespace std;

int main(){

    int valor1, valor2, tmp;

    cout<<"Ingrese el valor 1: ";cin>>valor1;
    cout<<"Ingrese el valor 2: ";cin>>valor2;

    cout<<"==ANTES=="<<endl;
    cout<<"Valor 1: "<<valor1<<"    Valor 2: "<<valor2<<endl;

    tmp=valor1;
    valor1=valor2;
    valor2=tmp;

    cout<<"==DESPUES=="<<endl;
    cout<<"Valor 1: "<<valor1<<"    Valor 2: "<<valor2<<endl;
}