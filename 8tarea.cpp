/*
Escriba un programa que lea la nota final de 
4 alumnos y calcule la nota final media de los 
4 alumnos.
*/

#include <iostream>
using namespace std;

int main(){

    float n1,n2,n3,n4,promedio;

    cout<<"NOTA 1: ";cin>>n1;
    cout<<"NOTA 2: ";cin>>n2;
    cout<<"NOTA 3: ";cin>>n3;
    cout<<"NOTA 4: ";cin>>n4;

    promedio = (n1+n2+n3+n4)/4;

    cout<<"LA NOTA FINAL DEL CURSO ES: "<< promedio;

}