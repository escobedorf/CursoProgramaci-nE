/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 28 de octubre de 2021, 04:59 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float b1, b2, h, area=0;
    
    printf ("AREA DE UN TRAPECIO\n");
    printf ("Digite la base mayor del trapecio: ");
        scanf ("%f", &b1);
    printf ("Digite la base menor del trapecio: ");
        scanf ("%f", &b2);
    printf ("Digite la altura del trapecio: ");
        scanf ("%f", &h);
    area = ((b1+b2)/2)*h;
     printf ("\nEl area del trapecio es: %.2f", area); 

    return (EXIT_SUCCESS);
}
