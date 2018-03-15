//
// Created by ASUS on 3/15/2018.
//
#include <iostream>
#include <fstream>
#include "UtilidadesListaEnlazada.h"

using namespace std;

void InsertarFinal(Utilidades ** nuevo, int val) {
 Utilidades *tmp=new Utilidades;
    tmp->valor=val;
if(*nuevo==0){
    *nuevo=tmp;
}else{
    Utilidades* actual=*nuevo;
    Utilidades* anterior=0;
    while(actual!=0){
        anterior=actual;
        actual=actual->sig;
    }
    anterior->sig=tmp;
    tmp->ant=anterior;
}
}

Utilidades **CrearLista(int n){
    Utilidades *Lista=new Utilidades; //ERROR
    int numeros,cont=0;
    while(cont<=n){
        numeros=rand()%(101-1);// 100 numeros aleatorios
        Lista->valor=numeros;
        InsertarFinal(&Lista,numeros);
        cont++;
    }
    return &Lista;
}

void OrdenarLista(Utilidades **Lista) {
    Utilidades *tmp=new Utilidades;
    int z;
    for (int i=1; i< sizeof(Utilidades); i++)
      for (int z=0 ; z< sizeof(Utilidades) - 1; z++)
           if (Lista[z] > Lista[z+1])
                tmp = Lista[z];
                Lista[z] = Lista[z+1];
                Lista[z+1] = tmp;
}

void GuardarLista(Utilidades **Lista, char *NombreArchivo) {
    ofstream archivoUtilidades(NombreArchivo,ios::out| ios::app | ios::binary);
    if(!archivoUtilidades){
        cout<<"Error al intentar abrir el archivo"<< NombreArchivo <<endl;
        return;
    }
    int val=0;
    if(*Lista == NULL){
        return;
    }else{
        Utilidades *lista=*Lista;
        val=lista->valor;
        archivoUtilidades<<val<<" ";
        GuardarLista(&(*Lista)->sig, NombreArchivo);
    }
    archivoUtilidades.close();
}
