#include <iostream>
using namespace std;

int main(){

    int a,b,c,d, resultado = 0;

    cout<<"Ingresa a = ";cin>>a;
    cout<<"Ingresa b = ";cin>>b;
    cout<<"Ingresa c = ";cin>>c;
    cout<<"Ingresa d = ";cin>>d;

    resultado = a + (b/(c-d));

    cout<<"RESULTADO: "<<resultado;
}