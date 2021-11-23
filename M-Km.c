/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   M-Km.c
 * Author: Francisco Escobedo
 *
 * Created on 22 de noviembre de 2021, 04:50 PM
 */

#include <stdio.h>
#include <stdlib.h>
/*
 */
int main(int argc, char** argv) {
    
    float km, m;
    int op;
    
    printf ("Conversion de kms a mts o mts a kms");
    printf ("\n1] Kilometros a metros");
    printf ("\n2] Metros a kilometros"); 
    printf ("\nDigite una opcion: ");
    scanf("%d" ,&op);
    if (op==1) {
    printf ("Digite los kilómetros a convertir: ");
    scanf ( "%f", &km);
    m = km*1000;
    printf("\nLa conversión a metros es %.2f: ", m);
    }
    else
    {
    printf("Digite los metros a convertir: ");
    scanf ( "%f", &m);
    km = m/1000;
    printf("\nLa conversión a kilometros es %.2f: ", km);
    }
    return (EXIT_SUCCESS);
}

