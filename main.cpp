#include <iostream>
#include <conio.h>
#include "UtilidadesListaEnlazada.h"
using namespace std;

int main() {
    int opc;
    Utilidades **Lista;

    do{
    cout<<" *** M E N U  D E  U T I L I D A D E S *** "<<endl;
    cout<<"1. Crear Lista"<<endl;
    cout<<"2. Insertar al Final"<<endl;
    cout<<"3. Ordenar Lista (menor a mayor) "<<endl;
    cout<<"4. Guardar Lista"<<endl;
    cout<<"Ingrese una opcion (-1 para salir): ";
        cin>>opc;

    switch (opc){
        case 1:
            int tam;
            cout<<"Ingrese el tamano de la lista:"<<endl;
            cin>>tam;
            CrearLista(tam);
            break;
        case 2:
            int valor;
            cout<<"Ingrese el valor a ingresar: "<<endl;
            cin>>valor;
            InsertarFinal(Lista,valor);
            break;
        case 3:
            OrdenarLista(Lista); //ERROR
            break;
        case 4:
            char nombreArchivo[30];
            cout<<"Ingrese nombre del archivo:"<<endl;
            cin>>nombreArchivo;
            GuardarLista(Lista,nombreArchivo);
            break;
    }
    getch();
        }while(opc!=-1);
    }