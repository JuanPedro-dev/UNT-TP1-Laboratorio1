#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 11. Suponiendo la existencia de una pila MODELO que no esté vacía, eliminar de la
        pila DADA todos los elementos que sean iguales al tope de la pila MODELO.   */

    char option = 's';

    // Creo DADA y la vacio.
    Pila DADA;
    inicpila(&DADA);

    // Creo MODELO y la vacio.
    Pila MODELO;
    inicpila(&MODELO);
    apilar(&MODELO,3);

    // Creo AUX1 y la vacio.
    Pila AUX1;
    inicpila(&AUX1);

    printf("\n                            Ejercicio 11 - Pilas                       \n");

    // Cargo valores a DADA.
    do
    {
        printf("\n >>> Pila DADA - ");
        leer(&DADA);
        system("cls");
        printf("\n                            Ejercicio 11 - Pilas                       \n");
        printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
        printf(" >>> Tu respuesta: ");
        fflush(stdin);
        scanf("%c", &option);
    }while(option == 's' || option == 'S');

    // Creo la pila basura para que no halla perdida de información.
    Pila basura;
    inicpila(&basura);

    // Recorro la pila DADA y comparo cada valor si es o no el tope de MODELO
    while(!pilavacia(&DADA))
    {
        if(tope(&MODELO) == tope(&DADA))
       {
            apilar(&basura, desapilar(&DADA));
       } else
       {
            apilar(&AUX1, desapilar(&DADA));
       }
    }

    while(!pilavacia(&AUX1))
    {
        apilar(&DADA, desapilar(&AUX1));
    }

    system("cls");
    printf("\n                            >> DADA                              \n\n");
    mostrar(&DADA);
    printf("\n                           >> MODELO                             \n\n");
    mostrar(&MODELO);
    printf("\n                           >> basura                             \n\n");
    mostrar(&basura);
    printf("\n                          >> AUXILIAR                              \n\n");
    mostrar(&AUX1);


    printf("\n\n");
    system("pause");
    return 0;
}
