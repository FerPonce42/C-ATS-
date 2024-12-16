/*
Comprobar si un numero es positivo o negativo
*/

#include <iostream>
using namespace std;

int main(){

    int numero;
    cout<<"Ingresa tu numero: ";cin>>numero;

    if(numero >= 0){
        cout<<numero<<" es Positivo.";
    }else{
        cout<<numero<<" es Negativo.";
    }
}