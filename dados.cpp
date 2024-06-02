#include<iostream>
#include <time.h>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
    //Diseñe el programa que simule el lanzamineto de 1 dado
    //El usuario tiene 3 oportunidades para ganar.
    //El usuario gana cuando sale un 6  o 1
    //se lanza el dado cuando aparece el mensaje: "Pulse ENTER para tirar el dado"

    ///Insertando una semilla para que los numero generados al azar sean diferentes en cada ocasión
    srand(time(NULL));

    char opcion;
    int oportunidades=1;
    bool ganaste=false;
    while(oportunidades<=3){
        cout<<"\nPulsar <ENTER> parar tirar el dado ";
        opcion = getch();
        int num = 1 + rand() % (6);
        cout<<"\n\t Salio la cara de numero "<<num;
        if(num ==6 || num==1){
            cout<<"\n\tGanaste un Viaje";
            ganaste=true;
            break;
        }else{
            cout<<"\n\tSigue intentarlo.";
        }
        oportunidades++;
    }
    if(!ganaste){
        cout<<"\n\tHas perdido toda tu oportunidad.";
    }
    /*opcion = getch();
    int num = 1 + rand() % (6);
    cout<<"\n\t Salio la cara de numero "<<num;
    if(num ==6 || num==1){
        cout<<"\n\tGanaste un Viaje";
    }else{
        cout<<"\n\tHas perdido";
    }*/
    
    return 0;
}