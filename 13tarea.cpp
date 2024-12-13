#include <iostream>
using namespace std;

int main(){

    int n1,n2,n3;

    cout<<"Ingresa n1: ";cin>>n1;
    cout<<"Ingresa n2: ";cin>>n2;
    cout<<"Ingresa n3: ";cin>>n3;

    if((n1>n2)&&(n1>n3)){
        cout<<n1<< " es el mayor de los tres ";
    }else if((n2>n1)&&(n2>n3)){
        cout<<n2<< " es el mayor de los tres ";
    }else if((n3>n1)&&(n3>n2)){
        cout<<n3<< " es el mayor de los tres ";
    }else{
        cout<<"Los tres numeros son iguales.";
    }


}