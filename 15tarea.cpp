/*
Escriba un pgrama, Si el caracter es una vocal minuscula, es una vocal mayuscula o no es una vocal
*/
#include <iostream>
using namespace std;

int main(){

    char letra;

    cout<<"Ingresa tu letra: ";cin>>letra;

    if(letra == 'a' || letra =='e' || letra =='i' || letra =='o' ||letra == 'u'){
        cout<<letra<<"  Es una vocal minuscula";
    }else if(letra == 'A' || letra =='E' || letra =='I' || letra =='O' ||letra == 'U'){
        cout<<letra<<"  Es una vocal mayuscula";
    }else{
        cout<<letra<<"  NO es una vocal minuscula ni mayuscula";
    }

}