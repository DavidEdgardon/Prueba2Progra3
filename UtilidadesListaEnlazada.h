//
// Created by ASUS on 3/15/2018.
//

#ifndef PRUEBA2PROGRA3_UTILIDADES_H
#define PRUEBA2PROGRA3_UTILIDADES_H


struct Utilidades {

    int valor;
    Utilidades *sig;
    Utilidades *ant;

    Utilidades() {
        sig = 0;
        ant = 0;
    }
};
     void InsertarFinal(Utilidades **, int);

     void OrdenarLista(Utilidades **);

     void GuardarLista(Utilidades **, char *);

    Utilidades ** CrearLista(int);

#endif //PRUEBA2PROGRA3_UTILIDADES_H
