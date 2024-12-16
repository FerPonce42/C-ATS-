#include <iostream>
using namespace std;

int main(){

    char letra;

    cout<<"Ingresa tu letra: ";cin>>letra;

    if(letra == 'a' || letra =='e' || letra =='i' || letra =='o' ||letra == 'u'){
        cout<<letra<<"  Es una vocal minuscula";
    }else{
        cout<<letra<<"  NO es una vocal minuscula";
    }

}