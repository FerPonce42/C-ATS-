/*
PAR O IMPAR
*/

#include <iostream>
using namespace std;

int main(){
    int numero;

    cout<<"Ingresa tu numero: ";cin>>numero;

    if (numero % 2 == 0){
        cout<<numero<<"  Es par ";
    }else{
        cout<<numero<<"  Es impar ";
    }
}