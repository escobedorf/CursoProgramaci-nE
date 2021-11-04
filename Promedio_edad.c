/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 26 de octubre de 2021, 05:21 PM
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
//indicador de tipo: void, int, etc.

//Programa: Calcular promedio de la edad de 3 persona

int main(){//funcion principal
    
    int p1, p2, p3, promedio;
    
    printf ("Promedio de edad\n");
    printf ("Digite la edad de la persona 1: ");
        scanf ("%d", &p1);
    printf ("Digite la edad de la persona 2: ");
        scanf ("%d", &p2);
    printf ("Digite la edad de la persona 3: ");
        scanf ("%d", &p3);
    promedio = (p1+p2+p3)/3;
     printf ("\nLa edad promedio es: %d", promedio);    
    
    return 0;
}

