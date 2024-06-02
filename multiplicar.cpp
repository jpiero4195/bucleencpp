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
    cout << "Ejerccio de clases de tablas de multiplicar" << endl;
    cout << "Ingrese que tabla desea que se imprima:" << endl;
    cin >> ta;
    cout << "Usted ingreseo el número " << ta << " y la tabla se muestra a continuacion:" << endl;
    cout << "La tabla del número "<< ta << endl;
    for(int n=0; n<=12; n++){
        cout << ta << " x " << n <<" = " << n*ta << endl;
    }

    return 0;
}
