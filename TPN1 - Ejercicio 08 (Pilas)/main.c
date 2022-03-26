#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 8. Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa. */

    char option;

    printf("\n                            Ejercicio 8 - Pilas                       \n");

    // Creo Mazo y la vacio.
    Pila MAZO;
    inicpila(&MAZO);

    do
    {
        printf("\n >>> Pila MAZO - ");
        leer(&MAZO);
        system("cls");
        printf("\n                            Ejercicio 8 - Pilas                       \n");
        printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
        printf(" >>> Tu respuesta: ");
        fflush(stdin);
        scanf("%c", &option);
    }while(option == 's' || option == 'S');

    // Creo JUGADOR1 y la vacio.
    Pila JUGADOR1;
    inicpila(&JUGADOR1);

    // Creo JUGADOR1 y la vacio. -
    Pila JUGADOR2;
    inicpila(&JUGADOR2);

    // Itero Mazo descartando los valores en Jugador 1 y Jugador 2
    while(!pilavacia(&MAZO))
    {
        apilar(&JUGADOR1, desapilar(&MAZO));

        if(!pilavacia(&MAZO))
        {
            apilar(&JUGADOR2, desapilar(&MAZO));
        }
    }

    // Resultados.
    system("cls");
    printf("\n                       >> Pila MAZO                       \n\n");
    mostrar(&MAZO);
    printf("\n                       >> Pila JUGADOR1                       \n\n");
    mostrar(&JUGADOR1);
    printf("\n                       >> Pila JUGADOR2                       \n\n");
    mostrar(&JUGADOR2);



    printf("\n\n");
    system("pause");
    return 0;
}
