// EJERCICIO PORCENTAJE DE NOTAS DE UN ALUMNO

#include <iostream>
using namespace std;

int main(){

    float practicas, teoricas, participacion, notafinal;

    cout<<"Nota de practica: ";cin>>practicas;
    cout<<"Nota de teoria: ";cin>>teoricas;
    cout<<"Nota de participacion: ";cin>>participacion;

    notafinal= ((practicas*0.30) + (teoricas * 0.60) + (participacion * 0.10));

    cout<<"La NOTA FINAL es: "<< notafinal;

}