/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 11 de octubre de 2021, 04:41 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

//Programa donde ingresemos nuestro nombre, edad, estatura y lugar donde estudio

int main(int argc, char** argv) {

    int edad, nt;
    float estatura;
    
    printf("Ingresa tu edad: ");
        scanf("%d",&edad);
        
    printf("Ingresa tu estatura: ");
        scanf("%f",&estatura);
        
    printf("Ingresa tu numero de telefono: ");
        scanf("%i",&nt);
        
    printf ("Tienes %d años, tu estatura es %f mts, y tu numero de telefono es %i", edad, estatura, nt);
    
    return (EXIT_SUCCESS);
}

