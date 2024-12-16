#include <iostream>
using namespace std;

int main(){

    int saldo = 1000;
    int agregar, retirar, opcion;
    cout<<"Cantidad actual: "<<saldo<<endl;
    cout<<"CAJERO"<<endl;
    cout<<"1. Retirar"<<endl;
    cout<<"2. Depositar"<<endl;
    cout<<"3. Salir"<<endl;cin>>opcion;

    switch(opcion){
        case 1:
            cout<<"Cantidad a retirar: ";cin>>retirar;
            saldo-=retirar;
            cout<<"Cantidad actual: "<<saldo<<endl;break;
        case 2:
            cout<<"Cantidad a depositar: ";cin>>agregar;
            saldo+=agregar;
            cout<<"Cantidad actual: "<<saldo<<endl;break;
        default: break;
    }
}