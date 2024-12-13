/*
OMG es el SWITCH!!!!
*/
#include <iostream>
using namespace std;

int main(){
    int numero;

    cout<<"Ingresa un numero entre 1 - 5: ";cin>>numero;

    switch(numero){
        case 1: cout<<" Es uno "; break;
        case 2: cout<<" Es dos "; break;
        case 3: cout<<" Es tres "; break;
        case 4: cout<<" Es cuatro "; break;
        case 5: cout<<" Es cinco "; break;

        default: cout<<"No esta en el rango"; break;
    }

}