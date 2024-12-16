#include <iostream>
using namespace std;

int main(){

    int opcion, numero;
    cout<<"    MENU    "<<endl;
    cout<<"1. Cubo de un numero"<<endl;
    cout<<"2. Numero par o impar"<<endl;
    cout<<"3. Salir."<<endl;
    cout<<"Opcion: ";cin>>opcion;

    switch(opcion){
        case 1:
            cout<<"Ingresa tu numero: ";cin>>numero;
            cout<<"Resultado: "<<(numero*numero*numero);break;
        case 2:
            cout<<"Ingresa tu numero: ";cin>>numero;
            cout<<"Resultado: ";
            if(numero%2==0){
                cout<<"Es par.";
            }else{
                cout<<"Es impar.";
            }break;
        default: break;
    }

}