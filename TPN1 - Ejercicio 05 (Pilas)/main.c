#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 5. Cargar desde el teclado la pila DADA. Invertir la pila de manera que DADA
         contenga los elementos cargados originalmente en ella, pero en orden inverso. */

    char option;

    printf("\n                            Ejercicio 5 - Pilas                       \n");

    // Creo una pila DADA, inicializo vacia y cargo datos.
    Pila DADA;
    inicpila(&DADA);

    // Cargo datos a DADA (Mientras option sea s vamos a cargar valores).
    do
    {
        printf("\n >>> Pila DADA - ");
        leer(&DADA);
        system("cls");
        printf("\n                            Ejercicio 5 - Pilas                       \n");
        printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
        printf(" >>> Tu respuesta: ");
        fflush(stdin);
        scanf("%c", &option);
    }while(option == 's' || option == 'S');

    // Creo una pila Auxiliar 1. Los Datos quedaran invertidos.
    Pila AUX1;
    inicpila(&AUX1);

    // Mientras DADA tenga datos, pasarlos a Auxiliar.
    while(!pilavacia(&DADA))
    {
        apilar(&AUX1, desapilar(&DADA));
    }

    // Creo una pila Auxiliar 2. Los Datos quedaran en el orden original.
    Pila AUX2;
    inicpila(&AUX2);

    // Mientras AUX1 tenga datos, pasarlos a AUX2. Esto es para que queden invertidos al pasarlo a DADA
    while(!pilavacia(&AUX1))
    {
        apilar(&AUX2, desapilar(&AUX1));
    }
    // Mientras AUX2 tenga datos, pasarlos a DADA.
    while(!pilavacia(&AUX2))
    {
        apilar(&DADA, desapilar(&AUX2));
    }

    // Mostrar el resultado

    system("cls");
    printf("\n                       Pila DADA                       \n\n");
    mostrar(&DADA);
    printf("\n                       Pila Auxiliar                       \n\n");
    mostrar(&AUX1);



    printf("\n\n");
    system("pause");
    return 0;
}
