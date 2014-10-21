#include <iostream>
#include "Cabecera.h"

using namespace std;

void agregar(Lista &C)
{
    int e;
    cout <<"Ingrese numero de caballeros a crear"<<endl;
    cin>>e;
    Lista2 p;
    for (int i=0;i<e;i++){
        p = new Nodo;
        p->Info = 65+rand()%25;
        p->ant = p;
        p->sig = p;

        if(C == NULL){
            C = p;
        }
        else{
            p->ant = C;
            p->sig = C->sig;
            p->sig->ant = p;
            C ->sig = p;

        }
    }
}

void Listar(Lista C){
    Lista2 p;
    cout << endl << "Caballeros de la mesa redonda " << endl;
    if(C!=NULL){
        p = C;
        printf(" valor : %c ",p->info);
        p = p->sig;
        while(p != C){
            printf(" valor : %c ",p->info);
            p = p->sig;
        }
    }
}

void Elegido (Lista &C,int k){

}
