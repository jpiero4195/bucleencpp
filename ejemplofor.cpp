#include <iostream>
using namespace std;

main (){
    int k;
    cout << "usando bucle for" << endl;
    for( k=1; k<=10; k++){
        cout << "lool numero " << k << "." << endl;
    }
    cout << "Se ejecuto " << k << " de veces" << endl;

    system("PAUSE");

    //cambiando el incrementoe del for
    cout << "usando bucle for" << endl;
    for( k=1; k<=10; k+=2){
        cout << "lool numero " << k << "." << endl;
    }
    cout << "Se ejecuto " << k << " de veces" << endl;

    system("PAUSE");
    return 0;
}