/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Año.c
 * Author: Francisco Escobedo
 *
 * Created on 22 de noviembre de 2021, 05:23 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int anio;
    
    printf("Indica si el anio en que naciste fue bisiesto \n \n " );
    printf("En que anio naciste: ");
    scanf ("%d", &anio);
    if( anio % 4 == 0)
    printf ("El anio en que naciste es bisiesto \n");
    else
    printf ("El anio en que naciste NO es bisiesto \n \n" );

    return (EXIT_SUCCESS);
}