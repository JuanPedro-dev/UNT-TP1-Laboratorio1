#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 4. Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
        Pasar los elementos de la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden.  */

    char option = 's';


    printf("\n                            Ejercicio 4 - Pilas                       \n");
    // Creo una pila ORIGEN, inicializo vacia y cargo datos.
    Pila ORIGEN;
    inicpila(&ORIGEN);

    while(option == 's' || option == 'S')
    {
        printf("\n >>> Ingrese un elemento a la pila ORIGEN: ");
        leer(&ORIGEN);
        system("cls");
        printf("\n                            Ejercicio 4 - Pilas                       \n");
        printf("\n >>> ¿Desea cargar un valor a ORIGEN? S o s: si, otra: no. \n");
        printf(" >>> Tu respuesta: ");
        fflush(stdin);
        scanf("%c", &option);
    }
    system("cls");

    // Creo una pila Auxiliar 1.
    Pila AUX1;
    inicpila(&AUX1);

    // Mientras Origen tenga datos, pasarlos a Auxiliar porque sino quedan en orden invertido.
    while(!pilavacia(&ORIGEN))
    {
        apilar(&AUX1, desapilar(&ORIGEN));
    }

    // Creo una pila DESTINO
    Pila DESTINO;
    inicpila(&DESTINO);

    // Mientras Auxiliar 1 tenga datos, pasarlos DESTINO.
    while(!pilavacia(&AUX1))
    {
        apilar(&DESTINO, desapilar(&AUX1));
    }


    // Mostrar el resultado

    printf("\n                       Pila ORIGEN                       \n\n");
    mostrar(&ORIGEN);
    printf("\n                       Pila Auxiliar                       \n\n");
    mostrar(&AUX1);
    printf("\n                       Pila DESTINO                       \n\n");
    mostrar(&DESTINO);


    printf("\n\n");
    system("pause");
    return 0;
}
