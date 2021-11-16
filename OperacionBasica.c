/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OperacionBasica.c
 * Author: Francisco Escobedo
 *
 * Created on 8 de noviembre de 2021, 04:16 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float x, y;
    printf ("Operaciones basicas de dos numeros\n");
    printf ("Digite el primer numero: ");
        scanf ("%f", &x);
    printf ("Digite el segundo numero: ");
        scanf ("%f", &y);
        
    printf ("\nLa suma es: %.2f", x+y);
    printf ("\nLa resta es: %.2f", x-y); 
    printf ("\nLa multiplicacion es: %.2f", x*y); 
    printf ("\nLa divicion es: %.2f", x/y); 

    return (EXIT_SUCCESS);
}

