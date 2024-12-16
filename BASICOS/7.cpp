#include <iostream>
using namespace std;

int main(){

    float a,b,c,d,e,f, resultado = 0;

    cout<<"Ingresa a = ";cin>>a;
    cout<<"Ingresa b = ";cin>>b;
    cout<<"Ingresa c = ";cin>>c;
    cout<<"Ingresa d = ";cin>>d;
    cout<<"Ingresa e = ";cin>>e;
    cout<<"Ingresa f = ";cin>>f;

    resultado =  (a + (b/c))  / (d + (e/f));

    cout<<"RESULTADO: "<<resultado<<endl;
}