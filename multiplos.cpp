#include <iostream>
using namespace std;

main (){
    //imprimia los multiplos de 3 que ixistan entre 1 y 50
    //por ejemplo : 3 - 6- 9 -12 ... 47
    int num;
    for( num=1; num<=50; num++){
        if(num%3==0){
            cout << "El numero " << num << " es multiplo de 3 " << endl;        
        }
    }

    system("PAUSE");

    for( num=3; num<50; num+=3){
        cout << "El numero " << num << " es multiplo de 3 " << endl;
    }
    cout << "Se ejecuto " << num << " de veces" << endl;

    system("PAUSE");
    return 0;
}