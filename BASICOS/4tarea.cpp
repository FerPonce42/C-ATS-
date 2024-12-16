/*
Escribe un programa que lea de la entrada 
estandar el precio de un prodcuto y muestre
en la salida estandar el precio
del producto al aplicarle el IVA
*/

#include <iostream>
using namespace std;

int main(){

 float producto, iva, final;

 cout<<"Ingrese el precio de su producto: S/."; cin>>producto;

 iva= producto * 0.18;

 final= iva + producto;

 cout<<"El precio FINAL es de :  S/. "<< final<<endl;

}