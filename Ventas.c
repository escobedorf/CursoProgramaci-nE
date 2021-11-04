/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   E4-Promedio.c
 * Author: Francisco Escobedo
 *
 * Created on 4 de noviembre de 2021, 04:46 PM
 */

#include <stdio.h>
#include <stdlib.h>

#define G 150.00
#define M 100.00
#define CH 50.00
#define PAN 2.50

/*
 */
int main(int argc, char** argv) {
    
    int g, m, ch, p;
    float total;
    
    printf("Digite la cantidad de pasteles GRANDES vendidos: ");
    scanf("%d", &g);
    printf("Digite la cantidad de pasteles MEDIANOS vendidos: ");
    scanf("%d", &m);
    printf("Digite la cantidad de pasteles CHICOS vendidos: ");
    scanf("%d", &ch);
    printf("Digite la cantidad de PANES vendidos: ");
    scanf("%d", &p);
    total=(g * G)+(m * M)+(ch * CH)+(p * PAN);
    printf ("\nEl total es: $%.2f", total); 
    
    return (EXIT_SUCCESS);
}
