/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Segundos.c
 * Author: Francisco Escobedo
 *
 * Created on 9 de noviembre de 2021, 05:07 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
        float min=0, seg=0, hor=0;
    printf("CONVERTIDOR DE TIEMPO\n");
        printf ("Digite la cantidad de segundos: ");
    scanf("%f", &seg);
    min = seg/60;
    hor = seg/3600;
    printf ("Equivalente en segundos %.2f\n", seg);
    printf ("Equivalente en minutos %.2f\n", min);
    printf ("Equivalente en horas %.2f", hor);

    return (EXIT_SUCCESS);
}

