#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    char option;
    system("color 1F");
    printf("////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//        /////////  //      //    //////////   //      //         //      //   //////////  //      //        //\n");
    Sleep(50);
    printf("//               //  //      //    //      //   ///     //         //      //       //      ///     //        //\n");
    Sleep(50);
    printf("//               //  //      //    //      //   // /    //         //      //       //      // /    //        //\n");
    Sleep(50);
    printf("//               //  //      //    //      //   //  /   //         //      //       //      //  /   //        //\n");
    Sleep(50);
    printf("//               //  //      //    //      //   //  /   //         //      //       //      //  /   //        //\n");
    Sleep(50);
    printf("//       //      //  //      //    //////////   //   /  //         //      //       //      //   /  //        //\n");
    Sleep(50);
    printf("//       //      //  //      //    //      //   //    / //         //      //       //      //    / //        //\n");
    Sleep(50);
    printf("//       //      //  //      //    //      //   //     ///         //      //       //      //     ///        //\n");
    Sleep(50);
    printf("//       //////////  //////////    //      //   //      //         //////////       //      //      //        //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    Sleep(500);

    do
    {
        system("color 3f");
        system("cls");
        printf("////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
        Sleep(50);
        printf("//                                                                                                            //\n");
        Sleep(50);
        printf("//                                     Lista de ejercicios TPN 1 - Pilas                                      //\n");
        Sleep(50);
        printf("//                                                                                                            //\n");
        Sleep(50);
        printf("//  Importante: no utilizar para la resolución de los ejercicios, variables que funcionen como                //\n");
        Sleep(50);
        printf("//  contadores o acumuladores. Debe resolver la problemática aplicando pensamiento lógico.                    //\n");
        Sleep(50);
        printf("//                                                                                                            //\n");
        Sleep(50);
        printf("//            Base ..................................................................... Tope                 //\n");
        Sleep(50);
        printf("//                  1): A        2): B       3): C       4): D       5): E        6): F                       //\n");
        Sleep(50);
        printf("//                                                                                                            //\n");
        Sleep(50);
        printf("//                  7): G        8): H       9): I       10): J      11): K      12): L                       //\n");
        Sleep(50);
        printf("//                                                                                                            //\n");
        Sleep(50);
        printf("//                 13): M        14):N      15): O       16): P     17): Q       18): R                       //\n");
        Sleep(50);
        printf("//            Base ..................................................................... Tope                 //\n");
        Sleep(50);
        printf("//                                                                                                            //\n");
        Sleep(50);
        printf("//        /////////  //      //    //////////   //      //         //      //   //////////  //      //        //\n");
        Sleep(50);
        printf("//               //  //      //    //      //   ///     //         //      //       //      ///     //        //\n");
        Sleep(50);
        printf("//               //  //      //    //      //   // /    //         //      //       //      // /    //        //\n");
        Sleep(50);
        printf("//               //  //      //    //      //   //  /   //         //      //       //      //  /   //        //\n");
        Sleep(50);
        printf("//               //  //      //    //      //   //  /   //         //      //       //      //  /   //        //\n");
        Sleep(50);
        printf("//       //      //  //      //    //////////   //   /  //         //      //       //      //   /  //        //\n");
        Sleep(50);
        printf("//       //      //  //      //    //      //   //    / //         //      //       //      //    / //        //\n");
        Sleep(50);
        printf("//       //      //  //      //    //      //   //     ///         //      //       //      //     ///        //\n");
        Sleep(50);
        printf("//       //////////  //////////    //      //   //      //         //////////       //      //      //        //\n");
        Sleep(50);
        printf("//                                                                                                            //\n");
        Sleep(50);
        printf("////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
        Sleep(50);
        printf("\n                                Tu entrada (Terminar Programa: s o S): ");
        fflush(stdin);
        scanf("%c", &option);

        system("color 3e");
        switch(option)
        {
        case 'a':
        case 'A':
            //////////////////////////////////////////////// Ejercicio 1 (A) /////////////////////////////////////////////////////////
            do
            {
                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");


                printf("\n                                     Ejercicio 1 - Pilas                       \n\n");

                printf("    1. Cargar desde el teclado una pila DADA con 5 elementos. Pasar los tres primeros elementos \n");
                printf("       a la pila AUX1 y los dos restantes a la pila AUX2, ambas pilas inicializadas en vacío.\n\n");

                // Creo una pila DADA, inicializo vacia.
                Pila DADA;
                inicpila(&DADA);

                // Cargo 5 datos Por teclado en pila DADA.
                printf("    >>> Pila DADA (1º elemento) -  ");
                leer(&DADA);
                printf("    >>> Pila DADA (2º elemento) -  ");
                leer(&DADA);
                printf("    >>> Pila DADA (3º elemento) -  ");
                leer(&DADA);
                printf("    >>> Pila DADA (4º elemento) -  ");
                leer(&DADA);
                printf("    >>> Pila DADA (5º elemento) -  ");
                leer(&DADA);


                // Creo una pila AUX1, inicializo vacia y paso 3 datos de DADA.
                Pila AUX1;
                inicpila(&AUX1);

                apilar(&AUX1, desapilar(&DADA));
                apilar(&AUX1, desapilar(&DADA));
                apilar(&AUX1, desapilar(&DADA));


                // Creo una pila AUX2, inicializo vacia y paso 2 datos de DADA.
                Pila AUX2;
                inicpila(&AUX2);
                apilar(&AUX2, desapilar(&DADA));
                apilar(&AUX2, desapilar(&DADA));

                // Mostrar el resultado
                system("cls");
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                        >> Pila DADA                       \n");
                mostrar(&DADA);
                printf("\n                        >> Pila Auxiliar1                       \n");
                mostrar(&AUX1);
                printf("\n                        >> Pila Auxiliar2                       \n");
                mostrar(&AUX2);

                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            }while(option == 'r' || option == 'R'); // fin repetir case a
            break;

            //////////////////////////////////////////////// Ejercicio 1 (A) ///////////////////////////////////////////////////////// FIN

        case 'b':
        case 'B':
            //////////////////////////////////////////////// Ejercicio 2 (B) /////////////////////////////////////////////////////////
            do
            {
                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");


                printf("\n                            Ejercicio 2 - Pilas                       \n\n");
                printf("    2. Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO. \n");
                printf("       Pasar todos los elementos de la pila ORIGEN a la pila DESTINO.\n\n");


                // Creo una pila ORIGEN, inicializo vacia.
                Pila ORIGEN;
                inicpila(&ORIGEN);

                // Cargo datos a Origen (Mientras option sea s vamos a cargar valores).
                do
                {
                    printf("\n >>> Pila ORIGEN - ");
                    leer(&ORIGEN);
                    system("cls");
                    printf("\n                            Ejercicio 2 - Pilas                       \n\n");
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
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                       Pila ORIGEN                       \n");
                mostrar(&ORIGEN);
                printf("\n                       Pila DESTINO                       \n");
                mostrar(&DESTINO);
                printf("\n                        Base .............. Resultados.................. Tope");
                printf("\n\n   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case b
            break;
            //////////////////////////////////////////////// Ejercicio 2 (B) ///////////////////////////////////////////////////////// FIN

        case 'c':
        case 'C':
            //////////////////////////////////////////////// Ejercicio 3 (C) /////////////////////////////////////////////////////////
            do
            {
                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");

                printf("\n                            Ejercicio 3 - Pilas                       \n\n");
                printf("    3. Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS \n");
                printf("       todos aquellos elementos distintos al valor 8.\n\n");

                // Creo una pila DADA, inicializo vacia.
                Pila DADA;
                inicpila(&DADA);

                // Cargo datos a DADA (Mientras option sea s vamos a cargar valores).
                do
                {
                    printf("\n >>> Pila DADA - ");
                    leer(&DADA);
                    system("cls");
                    printf("\n                            Ejercicio 3 - Pilas                       \n");
                    printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
                    printf(" >>> Tu respuesta: ");
                    fflush(stdin);
                    scanf("%c", &option);
                }while(option == 's' || option == 'S');

                // Creo una pila DISTINTOS, inicializo vacia.
                Pila DISTINTOS;
                inicpila(&DISTINTOS);

                // Creo una pila BASURA, inicializo vacia.
                Pila BASURA;
                inicpila(&BASURA);

                // Pasar los datos a destino.(Mientras Origen tenga datos, pasarlos a DESTINO).
                while(!pilavacia(&DADA))
                {
                    if(tope(&DADA) == 8) // si tope (ultimo valor) de DADA es 8 lo dejo BASURA
                    {
                        apilar(&BASURA, desapilar(&DADA));
                    } else
                    {
                        apilar(&DISTINTOS, desapilar(&DADA));
                    }
                }

                // Mostrar el contenido de las pilas.
                system("cls");
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                  >> Pila DADA                       \n");
                mostrar(&DADA);
                printf("\n                  >> Pila DISTINTOS                       \n");
                mostrar(&DISTINTOS);
                printf("\n                  >> Pila BASURA                       \n");
                mostrar(&BASURA);
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case C
            break;
            //////////////////////////////////////////////// Ejercicio 3 (C) ///////////////////////////////////////////////////////// FIN

        case 'd':
        case 'D':
            //////////////////////////////////////////////// Ejercicio 4 (D) /////////////////////////////////////////////////////////
            do
            {
                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");

                printf("\n                                       Ejercicio 4 - Pilas                       \n\n");
                printf("    4. Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO. \n");
                printf("       Pasar los elementos de la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden.\n\n");

                // Creo una pila ORIGEN, inicializo vacia.
                Pila ORIGEN;
                inicpila(&ORIGEN);

                // Cargo datos a ORIGEN (Mientras option sea s vamos a cargar valores).
                do
                {
                    printf("\n >>> Pila ORIGEN - ");
                    leer(&ORIGEN);
                    system("cls");
                    printf("\n                            Ejercicio 4 - Pilas                       \n");
                    printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
                    printf(" >>> Tu respuesta: ");
                    fflush(stdin);
                    scanf("%c", &option);
                }while(option == 's' || option == 'S');

                // Creo una pila Auxiliar 1 y la vacio.
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
                system("cls");
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                       >> Pila ORIGEN                       \n");
                mostrar(&ORIGEN);
                printf("\n                       >> Pila Auxiliar                     \n");
                mostrar(&AUX1);
                printf("\n                       >> Pila DESTINO                      \n");
                mostrar(&DESTINO);
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case D
            break;
            //////////////////////////////////////////////// Ejercicio 4 (D) ///////////////////////////////////////////////////////// FIN

        case 'e':
        case 'E':
            //////////////////////////////////////////////// Ejercicio 5 (E) /////////////////////////////////////////////////////////
            do
            {
                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");

                printf("\n                                       Ejercicio 5 - Pilas                       \n\n");
                printf("    5. Cargar desde el teclado la pila DADA. Invertir la pila de manera que DADA \n");
                printf("       contenga los elementos cargados originalmente en ella, pero en orden inverso. \n\n");

                // Creo una pila DADA, inicializo vacia.
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
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                       >> Pila DADA                       \n");
                mostrar(&DADA);
                printf("\n                       >> Pila Auxiliar 1                 \n");
                mostrar(&AUX1);
                printf("\n                       >> Pila Auxiliar 2                 \n");
                mostrar(&AUX2);
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case E
            break;
            //////////////////////////////////////////////// Ejercicio 5 (E) ///////////////////////////////////////////////////////// FIN

        case 'f':
        case 'F':
            //////////////////////////////////////////////// Ejercicio 6 (F) /////////////////////////////////////////////////////////
            do
            {
                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");

                printf("\n                                       Ejercicio 6 - Pilas                       \n\n");
                printf("    6. Pasar el primer elemento (tope) de la pila DADA a su última posición (base), \n");
                printf("        dejando los restantes elementos en el mismo orden.  \n\n");

                int elementoBase;

                // Creo una pila DADA, inicializo vacia.
                Pila DADA;
                inicpila(&DADA);

                // Cargo datos a DADA (Mientras option sea s vamos a cargar valores).
                do
                {
                    printf("\n >>> Pila DADA - ");
                    leer(&DADA);
                    system("cls");
                    printf("\n                            Ejercicio 6 - Pilas                       \n");
                    printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
                    printf(" >>> Tu respuesta: ");
                    fflush(stdin);
                    scanf("%c", &option);
                }while(option == 's' || option == 'S');

                // guardo el tope (ultimo valor) para luego colocarlo primero y tambien ya lo saco de DADA
                elementoBase = desapilar(&DADA);

                // Creo una pila DADA, inicializo vacia y cargo datos.
                Pila AUX1;
                inicpila(&AUX1);

                // Itero DADA, Pasando a Auxiliar quedando invertidos
                while(!pilavacia(&DADA))
                {
                    apilar(&AUX1, desapilar(&DADA));
                }

                // Coloco la base que era el tope
                apilar(&DADA, elementoBase);

                // Relleno la pila con el resto de los valores en el orden original
                while(!pilavacia(&AUX1))
                {
                    apilar(&DADA, desapilar(&AUX1));
                }

                // Mostrar el resultado
                system("cls");
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                       >> Pila DADA                      \n");
                mostrar(&DADA);
                printf("\n                       >> Pila Auxiliar                  \n");
                mostrar(&AUX1);

                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case F
            break;
            //////////////////////////////////////////////// Ejercicio 6 (F) ///////////////////////////////////////////////////////// FIN

        case 'g':
        case 'G':
            //////////////////////////////////////////////// Ejercicio 7 (G) /////////////////////////////////////////////////////////
            do
            {
                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");

                printf("\n                                       Ejercicio 7 - Pilas                       \n\n");
                printf("    7. Pasar el último elemento (base) de la pila DADA a su primera posición (tope), \n");
                printf("       dejando los restantes elementos en el mismo orden.  \n\n");

                int pasarATope;

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
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                      >> Pila DADA                       \n");
                mostrar(&DADA);
                printf("\n                      >> Pila Auxiliar                   \n");
                mostrar(&AUX1);
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case G
            break;
            //////////////////////////////////////////////// Ejercicio 7 (G) ///////////////////////////////////////////////////////// FIN

        case 'h':
        case 'H':
            //////////////////////////////////////////////// Ejercicio 8 (H) /////////////////////////////////////////////////////////
            do
            {
                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");

                printf("\n                                       Ejercicio 8 - Pilas                       \n\n");
                printf("    8. Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa. \n");

                // Creo Mazo y la vacio.
                Pila MAZO;
                inicpila(&MAZO);

                // Cargo valores a MAZO
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
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                       >> Pila MAZO                       \n");
                mostrar(&MAZO);
                printf("\n                       >> Pila JUGADOR1                   \n");
                mostrar(&JUGADOR1);
                printf("\n                       >> Pila JUGADOR2                   \n");
                mostrar(&JUGADOR2);
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case H
            break;
            //////////////////////////////////////////////// Ejercicio 8 (H) ///////////////////////////////////////////////////////// FIN

        case 'i':
        case 'I':
            //////////////////////////////////////////////// Ejercicio 9 (I) /////////////////////////////////////////////////////////
            do
            {
                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");

                printf("\n                                       Ejercicio 9 - Pilas                       \n\n");
                printf("    9. Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado. \n");

                // Creo PILA_A y la vacio.
                Pila PILA_A;
                inicpila(&PILA_A);

                // Cargo valores a Pila A
                do
                {
                    printf("\n >>> Pila PILA_A - ");
                    leer(&PILA_A);
                    system("cls");
                    printf("\n                            Ejercicio 9 - Pilas                       \n");
                    printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
                    printf(" >>> Tu respuesta: ");
                    fflush(stdin);
                    scanf("%c", &option);
                }while(option == 's' || option == 'S');

                // Creo PILA_B y la vacio.
                Pila PILA_B;
                inicpila(&PILA_B);

                // Cargo valores a Pila b
                do
                {
                    printf("\n >>> Pila PILA_B - ");
                    leer(&PILA_B);
                    system("cls");
                    printf("\n                            Ejercicio 9 - Pilas                       \n");
                    printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
                    printf(" >>> Tu respuesta: ");
                    fflush(stdin);
                    scanf("%c", &option);
                }while(option == 's' || option == 'S');

                // Mientras las pilas no esten vacias, las vacio.
                while(!pilavacia(&PILA_A) && !pilavacia(&PILA_B))
                {
                    desapilar(&PILA_A);
                    desapilar(&PILA_B);
                }

                // Ya vacie hasta que una de las dos se quedo sin valores. Ahora me fijo si le quedo a alguna de las pilas
                if(pilavacia(&PILA_A)&& pilavacia(&PILA_B))
                {
                    printf("\n                            Ejercicio 9 - Pilas                       \n\n");
                    printf(">>> La PILA A y PILA B tienen la misma cantidad de elementos. \n");
                } else if (!pilavacia(&PILA_A))
                {
                    printf("\n                            Ejercicio 9 - Pilas                       \n\n");
                    printf(">>> La PILA A tiene mayor cantidad de elementos. \n");
                } else
                {
                    printf("\n                            Ejercicio 9 - Pilas                       \n\n");
                    printf(">>> La PILA B tiene mayor cantidad de elementos. \n");
                }

                // Muestro resultados y pilas
                system("cls");
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                       Remanente PILA_A                       \n\n");
                mostrar(&PILA_A);
                printf("\n                       Remanente PILA_B                       \n\n");
                mostrar(&PILA_B);
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case i
            break;
            //////////////////////////////////////////////// Ejercicio 9 (i) ///////////////////////////////////////////////////////// FIN

        case 'j':
        case 'J':
            //////////////////////////////////////////////// Ejercicio 10 (J) /////////////////////////////////////////////////////////
            do
            {

                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");

                printf("\n                                       Ejercicio 10 - Pilas                       \n\n");
                printf("    10. Comparar las pilas A y B, evaluando si son completamente iguales (en cantidad de elementos,  \n");
                printf("        valores quecontienen y posición de los mismos). Mostrar por pantalla el resultado. \n");

                int flag;

                // Creo PILA_A y la vacio.
                Pila PILA_A;
                inicpila(&PILA_A);

                // Cargo valores a Pila A
                do
                {
                    printf("\n >>> Pila PILA_A - ");
                    leer(&PILA_A);
                    system("cls");
                    printf("\n                            Ejercicio 10 - Pilas                       \n");
                    printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
                    printf(" >>> Tu respuesta: ");
                    fflush(stdin);
                    scanf("%c", &option);
                }while(option == 's' || option == 'S');

                // Creo PILA_B y la vacio.
                Pila PILA_B;
                inicpila(&PILA_B);

                // Cargo valores a Pila b
                do
                {
                    printf("\n >>> Pila PILA_B - ");
                    leer(&PILA_B);
                    system("cls");
                    printf("\n                            Ejercicio 10 - Pilas                       \n");
                    printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
                    printf(" >>> Tu respuesta: ");
                    fflush(stdin);
                    scanf("%c", &option);
                }while(option == 's' || option == 'S');

                flag = 1; // flag digo que son iguales con 1 y si flag = 0 los valores van a ser diferentes.

                // Creo PILA_A_BASURA, PILA_B_BASURA y las vacio.
                Pila PILA_A_BASURA;
                inicpila(&PILA_A_BASURA);
                Pila PILA_B_BASURA;
                inicpila(&PILA_B_BASURA);


                // Mientras ambas pilas tienen valores hacer . El if compara si con iguales.
                while(!pilavacia(&PILA_A) && !pilavacia(&PILA_B))
                {
                    // Comparo y en caso de ser diferentes marcar con bandera (Flag = 1)
                    if(tope(&PILA_A) == tope(&PILA_B))
                    {
                        apilar(&PILA_A_BASURA, desapilar(&PILA_A));
                        apilar(&PILA_B_BASURA, desapilar(&PILA_B));
                        desapilar(&PILA_B);
                    } else
                    {
                        flag = 0;
                        apilar(&PILA_A_BASURA, desapilar(&PILA_A));
                        apilar(&PILA_B_BASURA, desapilar(&PILA_B));
                    }
                }
                system("cls");

                // Muestro resultados:
                // Comparo si las pilas estan vacias y si no, cual tiene elementos.
                if(pilavacia(&PILA_A)&& pilavacia(&PILA_B))
                {
                    // Si ninguna tiene elementos significa que tienen la misma cantidad y flag me avisa si hubo datos distintos
                    if(flag == 1){
                        printf("\n                            Ejercicio 10 - Pilas                       \n\n");
                        printf(">>> Son completamente iguales \n");
                    }else
                    {
                        printf(">>> La PILA A y PILA B tienen la misma cantidad de elementos. \n\n");
                        printf(">>> Son distintos en valores. \n\n");
                    }
                } else if (!pilavacia(&PILA_A))
                {
                    printf("\n                            Ejercicio 10 - Pilas                       \n\n");
                    printf(">>> La PILA A tiene mayor cantidad de elementos. \n\n");
                } else
                {
                    printf("\n                            Ejercicio 10 - Pilas                       \n\n");
                    printf(">>> La PILA B tiene mayor cantidad de elementos. \n\n");
                }

                // Muestro los valores de las pilas

                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                       >> Remanente PILA_A                       \n\n");
                mostrar(&PILA_A);
                printf("\n                       >> Remanente PILA_B                       \n\n");
                mostrar(&PILA_B);
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case j
            break;
            //////////////////////////////////////////////// Ejercicio 10 (J) ///////////////////////////////////////////////////////// FIN

        case 'k':
        case 'K':
            //////////////////////////////////////////////// Ejercicio 11 (K) /////////////////////////////////////////////////////////
            do
            {

                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");

                printf("\n                                       Ejercicio 11 - Pilas                       \n\n");
                printf("    11. Suponiendo la existencia de una pila MODELO que no esté vacía, eliminar de la \n");
                printf("        pila DADA todos los elementos que sean iguales al tope de la pila MODELO.  \n");

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
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                            >> DADA                              \n\n");
                mostrar(&DADA);
                printf("\n                           >> MODELO                             \n\n");
                mostrar(&MODELO);
                printf("\n                           >> basura                             \n\n");
                mostrar(&basura);
                printf("\n                          >> AUXILIAR                              \n\n");
                mostrar(&AUX1);
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case K
            break;
            //////////////////////////////////////////////// Ejercicio 11 (K) ///////////////////////////////////////////////////////// FIN

        case 'l':
        case 'L':
            //////////////////////////////////////////////// Ejercicio 12 (L) /////////////////////////////////////////////////////////
            do
            {

                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");

                printf("\n                                       Ejercicio 12 - Pilas                       \n\n");
                printf("    12. Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la \n");
                printf("        pila DADA todos los elementos que existan en MODELO. \n");

                int coincidenFlag;

                // Creo DADA y la vacio.
                Pila DADA;
                inicpila(&DADA);

                // Creo MODELO y la vacio.
                Pila MODELO;
                inicpila(&MODELO);
                apilar(&MODELO,3);
                apilar(&MODELO,2);
                apilar(&MODELO,1);

                // Creo AUX1 y la vacio.
                Pila AUX1;
                inicpila(&AUX1);

                // Creo MODELO_AUXILIAR y la vacio.
                Pila MODELO_AUXILIAR;
                inicpila(&MODELO_AUXILIAR);

                // Creo descarte y la vacio.
                Pila descarte;
                inicpila(&descarte);

                // Cargo valores a DADA.
                do
                {
                    printf("\n >>> Pila DADA - ");
                    leer(&DADA);
                    system("cls");
                    printf("\n                            Ejercicio 12 - Pilas                       \n");
                    printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
                    printf(" >>> Tu respuesta: ");
                    fflush(stdin);
                    scanf("%c", &option);
                }while(option == 's' || option == 'S');

//                apilar(&DADA,2);
//                apilar(&DADA,1);
//                apilar(&DADA,3);
//                apilar(&DADA,5);
//                apilar(&DADA,4);
//                apilar(&DADA,5);

                // Itero DADA para hacer las comparaciones.
                while(!pilavacia(&DADA))
                {
                    coincidenFlag = 0; // 0 significa q no hay coincidencias
                    while(!pilavacia(&MODELO) && !pilavacia(&DADA) && coincidenFlag == 0)
                    {
                        if(tope(&MODELO) == tope(&DADA))
                        {
                            coincidenFlag = 1;
                            apilar(&MODELO_AUXILIAR, desapilar(&MODELO));

                        } else
                        {
                            apilar(&MODELO_AUXILIAR, desapilar(&MODELO));
                        }
                    }

                    // while para voler a modelo
                    while(!pilavacia(&MODELO_AUXILIAR))
                    {
                        apilar(&MODELO, desapilar(&MODELO_AUXILIAR));
                    }

                    // Si hubo coincidencia, entonces coloco el tope en descarte, sino apilo en la auxiliar
                   if(coincidenFlag == 1)
                   {
                       apilar((&descarte), desapilar(&DADA));
                   }else
                   {
                      apilar(&AUX1, desapilar(&DADA));
                   }
                }

                // Apilo de nuevo en dada los valores sin los coincidentes.
                while(!pilavacia(&AUX1))
                {
                    apilar(&DADA, desapilar(&AUX1));
                }

                // Mostrar pilas.
                system("cls");
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                          >> DADA                              \n\n");
                mostrar(&DADA);
                printf("\n                          >> AUXILIAR                           \n\n");
                mostrar(&AUX1);
                printf("\n                          >> MODELO                             \n\n");
                mostrar(&MODELO);
                printf("\n                          >> MODELO Auxiliar                    \n\n");
                mostrar(&MODELO_AUXILIAR);
                printf("\n                          >> Descarte                  \n\n");
                mostrar(&descarte);
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case L
            break;
            //////////////////////////////////////////////// Ejercicio 12 (L) ///////////////////////////////////////////////////////// FIN

        case 'm':
        case 'M':
            //////////////////////////////////////////////// Ejercicio 13 (M) /////////////////////////////////////////////////////////
            do
            {
                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");

                printf("\n                                       Ejercicio 13 - Pilas                       \n\n");
                printf("    13. Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA \n");
                printf("        que sean mayores o iguales que el tope de LIMITE a la pila  MAYORES, y los elementos \n");
                printf("        que sean menores a la pila MENORES. \n");

                // Creo DADA y la vacio.
                Pila DADA;
                inicpila(&DADA);

                // Creo LIMITE, limpio y le doy valores.
                Pila LIMITE;
                inicpila(&LIMITE);
                apilar(&LIMITE,2);
                apilar(&LIMITE,1);
                apilar(&LIMITE,3);

                // Creo MAYORES y la vacio.
                Pila MAYORES;
                inicpila(&MAYORES);

                // Creo MENORES y la vacio.
                Pila MENORES;
                inicpila(&MENORES);

                // Cargo valores a DADA.
                do
                {
                    printf("\n >>> Pila DADA - ");
                    leer(&DADA);
                    system("cls");
                    printf("\n                            Ejercicio 13 - Pilas                       \n");
                    printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
                    printf(" >>> Tu respuesta: ");
                    fflush(stdin);
                    scanf("%c", &option);
                }while(option == 's' || option == 'S');

//                apilar(&DADA,2);
//                apilar(&DADA,3);
//                apilar(&DADA,5);
//                apilar(&DADA,6);
//                apilar(&DADA,7);
//                apilar(&DADA,8);

                // Itero DADA, y comparo el tope de dada con el tope de Limite
                while(!pilavacia(&DADA))
                {
                  if(tope(&DADA) >= tope(&LIMITE))
                  {
                      apilar(&MAYORES, desapilar(&DADA));
                  } else
                  {
                      apilar(&MENORES, desapilar(&DADA));
                  }
                }

                // Muestro Pilas.
                system("cls");
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                           >> DADA                              \n\n");
                mostrar(&DADA);
                printf("\n                           >> LIMITE                              \n\n");
                mostrar(&LIMITE);
                printf("\n                           >> MAYORES                               \n\n");
                mostrar(&MAYORES);
                printf("\n                           >> MENORES                             \n\n");
                mostrar(&MENORES);
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case M
            break;
            //////////////////////////////////////////////// Ejercicio 13 (M) ///////////////////////////////////////////////////////// FIN

        case 'n':
        case 'N':
            //////////////////////////////////////////////// Ejercicio 14 (N) /////////////////////////////////////////////////////////
            do
            {

                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");

                printf("\n                                       Ejercicio 14 - Pilas                       \n\n");
                printf("    14. Determinar si la cantidad de elementos de la pila DADA es par. Si es par, \n");
                printf("        pasar el elemento del tope de la pila AUX a la pila PAR y si es impar pasar el \n");
                printf("        tope a la pila IMPAR. \n");

                int esPar; // Flag para saber si es par o no.

                // Creo DADA y la vacio.
                Pila DADA;
                inicpila(&DADA);

                // Creo AUX, limpio y le doy valores.
                Pila AUX;
                inicpila(&AUX);

                // Creo PAR y la vacio.
                Pila PAR;
                inicpila(&PAR);

                // Creo IMPAR y la vacio.
                Pila IMPAR;
                inicpila(&IMPAR);

                // Cargo valores a DADA.
                do
                {
                    printf("\n >>> Pila DADA - ");
                    leer(&DADA);
                    system("cls");
                    printf("\n                            Ejercicio 14 - Pilas                       \n");
                    printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
                    printf(" >>> Tu respuesta: ");
                    fflush(stdin);
                    scanf("%c", &option);
                }while(option == 's' || option == 'S');

            //  //Para hacer testing:
            //    apilar(&DADA,3);
            //    apilar(&DADA,5);
            //    apilar(&DADA,6);
            //    apilar(&DADA,7);
            //    apilar(&DADA,8);

                // Itero DADA para saber si son pares o impares. Flag = 0 impar y Flag = 1 es par.
                while(!pilavacia(&DADA))
                {
                    esPar = 0;
                    apilar(&AUX, desapilar(&DADA));
                    if(!pilavacia(&DADA))
                    {
                        esPar = 1;
                        apilar(&AUX, desapilar(&DADA));
                    }
                }

                // Si es par paso el tope a par, sino a impar
                if(esPar)
                {
                    printf(">> La Pila DADA es par. \n\n");
                    apilar(&PAR, desapilar(&AUX));
                } else
                {
                    printf(">> La Pila DADA es impar. \n\n");
                    apilar(&IMPAR, desapilar(&AUX));
                }

                //Muestro Pilas:
                system("cls");
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                          >> DADA                              \n\n");
                mostrar(&DADA);
                printf("\n                          >> AUXILIAR                          \n\n");
                mostrar(&AUX);
                printf("\n                          >> PAR                               \n\n");
                mostrar(&PAR);
                printf("\n                          >> IMPAR                             \n\n");
                mostrar(&IMPAR);
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case N
            break;
            //////////////////////////////////////////////// Ejercicio 14 (N) ///////////////////////////////////////////////////////// FIN

        case 'o':
        case 'O':
            //////////////////////////////////////////////// Ejercicio 15 (O) /////////////////////////////////////////////////////////
            do
            {
                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");
                printf("\n                            Ejercicio 15 - Pilas                       \n\n");
                printf("  >> ¿Cuál es la condición del siguiente ciclo? ¿Cuándo finaliza el ciclo? (Pila1, Pila2, y Descarte son pilas): \n");
                printf("\n      while (!pilavacia(&Pila1)) {                      \n");
                printf("          apilar (&Pila2, desapilar(&Descarte));        \n");
                printf("      }                      \n\n");

                printf(" >> Podemos ver que la condición del ciclo es mientras 'Pila1 no este vacia'; pero el ciclo \n");
                printf(" >> no modifica a Pila1 por lo que no cortaria nunca quedando un bucle infinito si no fuera por\n");
                printf(" >> que cuando se vacie Descarte va a tirar un error rompiendo el programa.\n");

                printf("\n Ingrese al código fuente para analizar el fallo descomentando el las lineas que continuan este texto. ");

            //    // Creo Pila1, limpio y le doy valores.
            //    Pila Pila1;
            //    inicpila(&Pila1);
            //
            //    // Creo Pila2 y la vacio.
            //    Pila Pila2;
            //    inicpila(&Pila2);
            //
            //    // Creo Descarte y la vacio.
            //    Pila Descarte;
            //    inicpila(&Descarte);
            //
            //   while (!pilavacia(&Pila1)) {
            //        apilar (&Pila2, desapilar(&Descarte));
            //    }
            //
            //    // Podemos ver que la condición del ciclo es, mientras "Pila1 no este vacia"; pero el ciclo
            //    // no modifica a Pila1 por lo que no cortaría nunca quedando un bucle infinito si no fuera por
            //    // que, cuando se vacie Descarte va a tirar un error rompiendo el programa.
            //
            //
            //    // Nunca corre pues se rompe el programa con cuando intenta pasar a Pila 2 elementos de la pila vacia Descarte
            //    printf("EL ciclo finalizo.\n\n");
            //    printf("\n                        Base .............. Resultados.................. Tope\n\n");
            //    printf("\n                            >> Pila1                              \n");
            //    mostrar(&Pila1);
            //    printf("\n                            >> Pila2                              \n");
            //    mostrar(&Pila2);
            //    printf("\n                           >> Descarte                            \n");
            //    mostrar(&Descarte);
            //    printf("\n                        Base .............. Resultados.................. Tope\n\n");

                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case O
            break;
            //////////////////////////////////////////////// Ejercicio 15 (O) ///////////////////////////////////////////////////////// FIN

        case 'p':
        case 'P':
            //////////////////////////////////////////////// Ejercicio 16 (P) /////////////////////////////////////////////////////////
            do
            {
                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");

                /** 16. Qué realiza el siguiente código escrito en lenguaje C (Pila1, Aux y Result son pilas):
                    while (!pilavacia(&Pila1)) {
                        if (tope(&Pila1) == 5) {
                            apilar (&Aux, desapilar(&Pila1));
                            apilar (&Result, desapilar(&Aux));
                        }
                    }
                */
                printf("                                 Ejercicio 16 - Pilas                       \n\n");
                printf("  >> 16. Qué realiza el siguiente código escrito en lenguaje C (Pila1, Aux y Result son pilas): \n");
                printf("\n       while (!pilavacia(&Pila1)) {                   \n");
                printf("            if (tope(&Pila1) == 5) {                    \n");
                printf("                apilar (&Aux, desapilar(&Pila1));       \n");
                printf("                apilar (&Result, desapilar(&Aux));      \n");
                printf("            }                                           \n");
                printf("         }                                              \n\n");
                printf(" >> Mientras Pila 1 no este vacia, compara el tope de Pila 1 con 5, si no es 5   \n");
                printf(" >> hace un bucle infinito pues nunca se modifica el valor de Pila 1. Por lo tanto va           \n");
                printf(" >> a terminar el programa, si y solo si, Pila 1 contiene solo 5 en todos sus valores.           \n");

                printf("\n Ingrese al código fuente para analizar el fallo descomentando el las lineas que continuan este texto. \n\n");

            //    // Creo Pila1, limpio y le doy valores.
            //    Pila Pila1;
            //    inicpila(&Pila1);
            //
            //    // Creo Aux y la vacio.
            //    Pila Aux;
            //    inicpila(&Aux);
            //
            //    // Creo Result y la vacio.
            //    Pila Result;
            //    inicpila(&Result);
            //
            //    // Cargo 3 datos en Pila 1
            //    leer(&Pila1);
            //    leer(&Pila1);
            //    leer(&Pila1);
            //
            //    while (!pilavacia(&Pila1)) {
            //        if (tope(&Pila1) == 5) {
            //            apilar (&Aux, desapilar(&Pila1));
            //            apilar (&Result, desapilar(&Aux));
            //        }
            //    }
            //
            //    printf("EL ciclo finalizo.\n\n");
            //    printf("\n                           >> Pila1                            \n");
            //    mostrar(&Pila1);
            //    printf("\n                           >> Auxiliar                         \n");
            //    mostrar(&Aux);
            //    printf("\n                           >> Result                           \n");
            //    mostrar(&Result);

                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case p
            break;
            //////////////////////////////////////////////// Ejercicio 16 (P) ///////////////////////////////////////////////////////// FIN

        case 'q':
        case 'Q':
            //////////////////////////////////////////////// Ejercicio 17 (Q) /////////////////////////////////////////////////////////
            do
            {
                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");

                /** 17. Para el ejercicio “Cargar por teclado una pila ORIGEN y pasar a la pila DISTINTO todos aquellos
                elementos que preceden al valor 5 (elementos entre el tope y el valor 5). No se asegura que exista algún
                valor 5”, se realizo el siguiente programa:
                // este programa carga por teclado una pila Origen y pasa a la pila Destino todos aquellos elementos
                 que preceden el valor 5

                 int main() {
                    Pila Origen, Distinto;
                    inicpila(&Origen);
                    inicpila(&Distinto);
                    leer(&Origen);
                    if (!pilaVacia(&Origen)){
                        while (tope(&Origen) != 5) {
                        apilar (&Distinto, desapilar(&Origen));
                        }
                    }
                }

                a. .Resuelve el problema planteado?
                b. .Cuales son los errores que encuentra?
                c. Reescribir el código para que resuelva adecuadamente el problema planteado.
                d. Indicar las componentes del programa.
                */


                printf("\n                                          Ejercicio 17 - Pilas                                                    \n\n");
                printf(" >> 17. Para el ejercicio “Cargar por teclado una pila ORIGEN y pasar a la pila DISTINTO todos aquellos             \n");
                printf(" >>     elementos que preceden al valor 5 (elementos entre el tope y el valor 5). No se asegura que exista algún    \n");
                printf(" >>     valor 5”, se realizo el siguiente programa:                                                                 \n\n");
                printf("////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n");
                printf(" >>  // este programa carga por teclado una pila Origen y pasa a la pila Destino todos aquellos elementos           \n");
                printf(" >>     que preceden el valor 5                                                                                     \n\n");
                printf(" >>     int main() {                                                                                                \n");
                printf(" >>         Pila Origen, Distinto;                                                                                  \n");
                printf(" >>         inicpila(&Origen);                                                                                      \n");
                printf(" >>         inicpila(&Distinto);                                                                                    \n");
                printf(" >>         leer(&Origen);                                                                                          \n");
                printf(" >>         if (!pilaVacia(&Origen)){                                                                               \n");
                printf(" >>             while (tope(&Origen) != 5) {                                                                        \n");
                printf(" >>             apilar (&Distinto, desapilar(&Origen));                                                             \n");
                printf(" >>             }                                                                                                   \n");
                printf(" >>         }                                                                                                       \n\n");
                printf(" >> a. ¿Resuelve el problema planteado?                                                                             \n");
                printf(" >> b. ¿Cuales son los errores que encuentra?                                                                       \n");
                printf(" >> c. Reescribir el código para que resuelva adecuadamente el problema planteado.                                  \n");
                printf(" >> d. Indicar las componentes del programa.                                                                        \n\n");

                printf(" >> a. No, si tope de origen es distinto de 5, queda en un blucle infinito, y si es 5 no hace nada                  \n");
                printf(" >> b. No recorre la pila ORIGEN debidamente, no contempla bucles infinitos.                                        \n");
                printf(" >> c. int main(){                                                                                                  \n");
                printf(" >>         Pila Origen, Distinto;                                                                                  \n");
                printf(" >>         inicpila(&Origen);                                                                                      \n");
                printf(" >>         inicpila(&Distinto);                                                                                    \n");
                printf(" >>         while (!pilavacia(&Origen) && tope(&Origen) !=5){                                                       \n");
                printf(" >>             apilar(&Distinto, desapilar(&Origen));                                                              \n");
                printf(" >>         }                                                                                                       \n\n");
                printf("   Ingrese al código fuente para analizar el fallo, descomentando (//) las lineas que continuan este texto.         \n\n");
                printf("   O Ingrese al código fuente para analizar el item c descomentando (/** */) las lineas que continuan este texto.   \n\n");

            //        Pila Origen, Distinto;
            //        inicpila(&Origen);
            //        inicpila(&Distinto);
            //        leer(&Origen);
            //
            //        if (!pilavacia(&Origen)){   // no se si fue error de tipeo pero reemplace pilaVacia por pilavacia
            //            while (tope(&Origen) != 5) {
            //            apilar (&Distinto, desapilar(&Origen));
            //            }
            //        }
            //
            //    //Muestro Pilas:
            //    printf("\n                          >> Origen                              \n");
            //    mostrar(&Origen);
            //    printf("\n                          >> Distinto                            \n");
            //    mostrar(&Distinto);


            /**    // Creo pila Origen y limpio valores.
                Pila Origen;
                inicpila(&Origen);

                // Creo pila Distinto y limpio valores.
                Pila Distinto;
                inicpila(&Distinto);


                // Pruebo con 4 valores.
                printf(">> Vamos a algunos valores a Origen para hacer la prueba\n");
                leer(&Origen);
                leer(&Origen);
                leer(&Origen);
                leer(&Origen);

                // Itero Origen y si es el tope != 5 lo paso a distinto.
                while (!pilavacia(&Origen) && tope(&Origen) !=5)
                {
                    apilar(&Distinto, desapilar(&Origen));
                }

                //Muestro Pilas:
                system("cls");
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
                printf("\n                            >> Origen                                     \n");
                mostrar(&Origen);
                printf("\n                            >> Distinto                                   \n");
                mostrar(&Distinto);
                printf("\n                        Base .............. Resultados.................. Tope\n\n");
            */


                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case Q
            break;
            //////////////////////////////////////////////// Ejercicio 17 (Q) ///////////////////////////////////////////////////////// FIN

        case 'r':
        case 'R':
            //////////////////////////////////////////////// Ejercicio 18 (R) /////////////////////////////////////////////////////////
            do
            {
                system("cls");
                printf("\n      Base ................................................................................. Tope\n\n");
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
                printf("\n      Base ................................................................................. Tope\n\n");
                /** 18. Dado el siguiente ciclo (Pila1, Pila2 y Descarte son pilas):
                    while ( (!pilaVacia(&Pila1)) && (!pilaVacia(&Pila2)) ) {
                        apilar (&Descarte, desapilar(&Pila1));
                        apilar (&Descarte, desapilar(&Pila2))
                    }
                    a. ¿Cuál es la condición del ciclo? Explique con sus palabras
                    b. ¿Cuales son los posibles estados de ambas pilas al finalizar el ciclo?
                */

                printf("\n                                          Ejercicio 18 - Pilas                                           \n\n");
                printf(" >> 18. Dado el siguiente ciclo (Pila1, Pila2 y Descarte son pilas):                                      \n\n");
                printf(" >>     while ( (!pilaVacia(&Pila1)) && (!pilaVacia(&Pila2)) ) {                                           \n");
                printf(" >>         apilar (&Descarte, desapilar(&Pila1));                                                         \n");
                printf(" >>         apilar (&Descarte, desapilar(&Pila2));                                                          \n");
                printf(" >>     }                                                                                                   \n");
                printf(" >>  a. ¿Cuál es la condición del ciclo? Explique con sus palabras\n");
                printf(" >>  b. ¿Cuales son los posibles estados de ambas pilas al finalizar el ciclo? \n\n");
                printf(" >>  a. Mientras ambas pilas no esten vacias.\n");
                printf(" >>  b. Ambas pilas vacias si tienen la misma cantidad de elementos sino aquella con \n");
                printf(" >>     más elementos tendrá la diferencia(de sus cantidades). \n\n\n");
                printf("     Ingresar el código fuente para descomentar y ver la ejecución. \n\n");

            //    // Creo Pila1, limpio y le doy valores.
            //    Pila Pila1;
            //    inicpila(&Pila1);
            //
            //    // Creo Pila2 y la vacio.
            //    Pila Pila2;
            //    inicpila(&Pila2);
            //
            //    // Creo Descarte y la vacio.
            //    Pila Descarte;
            //    inicpila(&Descarte);
            //
            //    // Cargo algunos valores a ambos
            //    leer(&Pila1);
            //    leer(&Pila1);
            //    leer(&Pila1);
            //    leer(&Pila2);
            //    leer(&Pila2);
            //    leer(&Pila2);
            //    leer(&Pila2);
            //
            //        while ( (!pilavacia(&Pila1)) && (!pilavacia(&Pila2)) ) {
            //        apilar (&Descarte, desapilar(&Pila1));
            //        apilar (&Descarte, desapilar(&Pila2));
            //    }
            //
            //    // Muestro las pilas:
            //    system("cls");
            //    printf("\n                            Pila1                              \n");
            //    mostrar(&Pila1);
            //    printf("\n                            Pila2                              \n");
            //    mostrar(&Pila2);
            //    printf("\n                            Descarte                           \n");
            //    mostrar(&Descarte);

                 printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R'); // fin repetir case R
            break;
            //////////////////////////////////////////////// Ejercicio 18 (R) ///////////////////////////////////////////////////////// FIN


        } // fin Case
    } while(option != 's' && option != 'S'); // Fin repetir programa


    printf("El programa a finalizado!!\n");
    system("pause");
    return 0;
}
