#include<iostream>
using namespace std;
int main(){
    //uso de bucle do .. while
    //Diseñe el programa que realice la sumatoria de los numeros
    //desde el 1 al 100
    // por ejemplo: 1+2+3+4....+99+100
    //use un acumulador: suma=suma+valor
    int suma=0;
    int cont=0;
    cout << endl;
    do {
        suma=suma+cont;
        cont++;
    }while(cont<=100);
    cout << "la sumatoria de los numero desde el 1 al 100 es: " << suma << endl;

    //otra forma

    suma=0;
    cont=0;
    cout << endl;
    do {
        cont++;
        suma+=cont;
    }while(cont<100);
    cout << "la sumatoria de los numero desde el 1 al 100 es: " << suma << endl;

    return 0;
}
