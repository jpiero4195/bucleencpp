#include <iostream>
using namespace std;

int main(){
    //imprima los 12 primero resultados de la tabla del 5
    //5 10 15 ..... 50 55 60
    cout << "Tabla de multiplicar del 5" << endl;
    //impirmir el resultado de esta forma 5 x 1 = 5
    for(int n=0; n<=12; n++){
        cout << "5 x " << n <<" = " << n*5 << endl;
    }

    //ejercicio: pida al usuario, que tabla desea
    //y acontinuariocn imprima esa tabla

    int ta=0;
    int nu=0;
    cout << "Diseñe el programa que solicite una tabla de multiplicar" << endl;
    cout << "y a continuacion la imprima por pantalla desde el 1 al 15" << endl;
    cout << "use bucle while" << endl;
    cout << "Ingrese que tabla desea que se imprima:" << endl;
    cin >> ta;
    cout << "Usted ingreso el número " << ta << " y la tabla se muestra a continuacion:" << endl;
    cout << "La tabla del número "<< ta << endl;
    while(nu<15){
        nu++;
        cout << ta << " x " << nu <<" = " << nu*ta << endl;
    }

    return 0;
}
