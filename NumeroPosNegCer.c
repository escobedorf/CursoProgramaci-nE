/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NumeroPosNegCer.c
 * Author: Francisco Escobedo
 *
 * Created on 8 de noviembre de 2021, 05:27 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    
    printf("Tipo de numero\n");
    printf("Digite un numero\n");
        scanf("%i",&n);
    if( n == 0)
         printf("Es igual a cero\n");
    if( n >= 1)
        printf("Es positivo\n");
    if( n < 0)
        printf("Es negativo");

    return (EXIT_SUCCESS);
}

