#include <iostream>
using namespace std;

int main(){

    int n1,n2,n3;

    cout<<"Ingresa tus numeros: ";cin>>n1;
    cout<<"Ingresa tus numeros: ";cin>>n2;
    cout<<"Ingresa tus numeros: ";cin>>n3;

    cout<<"TUS NUMEROS SON: "<<endl;
    cout<<n1<<" "<<n2<<" "<<n3<<endl;

    int n4;
    cout<<"Ingresa un 4to numero:";cin>>n4;

    if(n4==n1 || n4==n2 || n4==n3){
        cout<<"SI, repetiste numero";
    }else{
        cout<<"NO, es un nuevo numero";
    }

}