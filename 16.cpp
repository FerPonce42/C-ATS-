#include <iostream>
using namespace std;

int main(){
    int edad;
    cout<<"CUAL ES TU EDAD?: ";cin>>edad;

    if(edad>=18 && edad<=25){
        cout<<"SI estas en el rango";
    }else{
        cout<<"NO estas en el rango";
    }
}