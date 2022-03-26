#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 7. Pasar el último elemento (base) de la pila DADA a su primera posición (tope),
        dejando los restantes elementos en el mismo orden.  */

    char option;
    int pasarATope;

    printf("\n                            Ejercicio 7 - Pilas                       \n");

    // Creo una pila DADA, inicializo vacia..
    Pila DADA;
    inicpila(&DADA);

    // Cargo datos a DADA (Mientras option sea s vamos a cargar valores).
    do
    {
        printf("\n >>> Pila DADA - ");
        leer(&DADA);
        system("cls");
        printf("\n                            Ejercicio 7 - Pilas                       \n");
        printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
        printf(" >>> Tu respuesta: ");
        fflush(stdin);
        scanf("%c", &option);
    }while(option == 's' || option == 'S');

    // Creo una pila Aux, inicializo vacia.
    Pila AUX1;
    inicpila(&AUX1);

    // Itero DADA, guardo esos
    while(!pilavacia(&DADA))
    {
        apilar(&AUX1, desapilar(&DADA));
    }
    // Guardo la base para ponerlo en el tope luego y lo borro.
    pasarATope = desapilar(&AUX1);

    // Itero aux, colocando los valores en la pila pero ahora sin la base.
    while(!pilavacia(&AUX1))
    {
        apilar(&DADA, desapilar(&AUX1));
    }

    // Coloco la base en el tope
    apilar(&DADA, pasarATope);

    // Mostrar el resultado
    system("cls");
    printf("\n                      >> Pila DADA                       \n");
    mostrar(&DADA);
    printf("\n                      >> Pila Auxiliar                   \n");
    mostrar(&AUX1);

    printf("\n\n");
    system("pause");
    return 0;
}
