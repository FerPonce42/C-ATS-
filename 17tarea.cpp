#include <iostream>
using namespace std;

int main(){

    int mes;

    cout<<"Ingresa el # de mes: ";cin>>mes;

    switch(mes){
        case 1:
            cout<<mes<< " = enero"; break;
        case 2:
            cout<<mes<< " = febrero";break;
        case 3:
            cout<<mes<< " = marzo";break;
        case 4:
            cout<<mes<< " = abril";break;
        case 5:
            cout<<mes<< " = mayo";break;
        case 6:
            cout<<mes<< " = junio";break;
        case 7:
            cout<<mes<< " = julio";break;
        case 8:
            cout<<mes<< " = agosto"; break;
        case 9:
            cout<<mes<< " = setiembre";break;
        case 10:
            cout<<mes<< " = octubre";break;
        case 11:
            cout<<mes<< " = noviembre";break;
        case 12:
            cout<<mes<< " = diciembre";    break;                                                         
    }
}