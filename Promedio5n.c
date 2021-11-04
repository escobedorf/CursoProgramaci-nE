/* 
 * File:   main.c
 * Author: Francisco Escobedo
 * Created on 26 de octubre de 2021, 05:48 PM
 */
#include <stdio.h>
#include <stdlib.h>
/*
 */
int main(int argc, char** argv) {
    
    float c1, c2, c3, c4, c5, promedio;
    
    printf ("Promedio de calificacion\n");
    printf ("Digite la calificacion 1: ");
        scanf ("%f", &c1);
    printf ("Digite la calificacion 2: ");
        scanf ("%f", &c2);
    printf ("Digite la calificacion 3: ");
        scanf ("%f", &c3);
    printf ("Digite la calificacion 4: ");
        scanf ("%f", &c4);
    printf ("Digite la calificacion 5: ");
        scanf ("%f", &c5);
    promedio = (c1+c2+c3+c4+c5)/5;
     printf ("\nEl promedio de calificacion es: %.2f", promedio); 

    return (EXIT_SUCCESS);
}

