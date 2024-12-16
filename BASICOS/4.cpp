/*
Escribe un programa que lea de la entrada estandar
2 numeros y muestre su suma, resta, multiplicaicon y division
*/

#include <iostream>
using namespace std;

int main(){;

    int n1, n2;

    cout<<"Ingrese el 1er numero: ";cin>>n1;
    cout<<"Ingrese el 2do numero: ";cin>>n2;

    cout<<"SUMA = "<< n1+n2 <<endl;
    cout<<"RESTA = "<< n1-n2 <<endl;
    cout<<"MULTI = "<< n1*n2 <<endl;
    cout<<"DIVIS = "<< n1/n2 <<endl;
}