#include <iostream>
using namespace std;

int main(){

    int n1,n2;

    cout<<"Ingresa n1: ";cin>>n1;
    cout<<"Ingresa n2: ";cin>>n2;

    if(n1 > n2){
        cout<< n1<< "  es mayor a "<<n2;
    }else if(n1 < n2){
        cout<< n2<< "  es mayor a "<<n1;
    }else if(n1 == n2){
        cout<< n1<< " SON IGUALES "<<n2;
    }


}