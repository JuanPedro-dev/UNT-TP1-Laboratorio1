#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "../Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    /** 2. Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
        Pasar todos los elementos de la pila ORIGEN a la pila DESTINO. */

    system("color 3e");
    printf("\n\n      Base ................................................................................. Tope\n\n");
    printf("    //    /////////  //      //    //////////   //      //         //      //   //////////  //      //     \n");
    Sleep(50);
    printf("    //           //  //      //    //      //   ///     //         //      //       //      ///     //     \n");
    Sleep(50);
    printf("    //           //  //      //    //      //   //  /   //         //      //       //      //  /   //     \n");
    Sleep(50);
    printf("    //   //      //  //      //    //////////   //   /  //         //      //       //      //   /  //     \n");
    Sleep(50);
    printf("    //   //      //  //      //    //      //   //    / //         //      //       //      //    / //     \n");
    Sleep(50);
    printf("    //   //      //  //      //    //      //   //     ///         //      //       //      //     ///     \n");
    Sleep(50);
    printf("    //   //////////  //////////    //      //   //      //         //////////       //      //      //     \n");
    printf("\n\n     Base ................................................................................. Tope\n\n");


    char option = 's';

    printf("\n                            Ejercicio 2 - Pilas                       \n");

    // Creo una pila ORIGEN, inicializo vacia.
    Pila ORIGEN;
    inicpila(&ORIGEN);

    // Cargo datos a Origen (Mientras option sea s vamos a cargar valores).
    do
    {
        printf("\n >>> Pila ORIGEN - ");
        leer(&ORIGEN);
        system("cls");
        printf("\n                            Ejercicio 2 - Pilas                       \n");
        printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
        printf(" >>> Tu respuesta: ");
        fflush(stdin);
        scanf("%c", &option);
    }while(option == 's' || option == 'S');


    // Creo una pila DESTINO, inicializo vacia..
    Pila DESTINO;
    inicpila(&DESTINO);

    // Paso los elementos (mientras Origen tenga datos, pasarlos a DESTINO).
    while(!pilavacia(&ORIGEN))
    {
        apilar(&DESTINO, desapilar(&ORIGEN));
    }

    // Mostrar el contenido de las pilas.
    system("cls");
    printf("\n                       Pila ORIGEN                       \n");
    mostrar(&ORIGEN);
    printf("\n                       Pila DESTINO                       \n");
    mostrar(&DESTINO);


    printf("\n\n");
    system("pause");
    return 0;
}
