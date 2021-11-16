/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cilindro-A-V.c
 * Author: Francisco Escobedo
 *
 * Created on 9 de noviembre de 2021, 04:50 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float altura, base, volumen=0, area=0;
    printf("AREA Y VOLUMEN DE UN CILINDRO\n");
        printf ("Digite el valor de la altura del cilindro: ");
    scanf("%f", &altura);
        printf ("Digite el valor de la base del cilindro: ");
    scanf("%f", &base);
    volumen = (3.1316*((base/2)*(base/2)))*altura;
    area = (2*3.1416*((base/2)*altura))+ ((6.2832)*((base/2)*(base/2)));
    printf ("Volumen %f\n", volumen);
    printf ("Area %f", area);
        

    return (EXIT_SUCCESS);
}

