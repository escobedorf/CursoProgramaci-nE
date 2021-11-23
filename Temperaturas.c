/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Temperaturas.c
 * Author: Francisco Escobedo
 *
 * Created on 23 de noviembre de 2021, 04:57 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    float fa, ce;
    int op;
    
    printf ("Conversion de farenheit a celsius o celsius a farenheit");
    printf ("\n1] Farenheit a celsius");
    printf ("\n2] Celsius a farenheit"); 
    printf ("\nDigite una opcion: ");
    scanf("%d" ,&op);
    if (op==1) {
    printf ("Digite los Farenheit a convertir: ");
    scanf ( "%f", &fa);
    ce = ((fa-32)*0.5555555555);
    printf("\nLa conversión a celsius es %.2f °C: ", ce);
    }
    else
    {
    printf("Digite los Celsius a convertir: ");
    scanf ( "%f", &ce);
    fa = ((ce*1.8)+32);
    printf("\nLa conversión a farenheit es %.2f °F: ", fa);
    }
    return (EXIT_SUCCESS);
    return (EXIT_SUCCESS);
}

