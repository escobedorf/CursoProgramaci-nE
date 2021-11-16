/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CuadroAstericos.c
 * Author: Francisco Escobedo
 *
 * Created on 9 de noviembre de 2021, 05:21 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int i,j,num;
    printf("Ingrese un numero: ");
    scanf("%d",&num);

    for(i=0; i<num ; i++){
        for(j=0; j<num; j++)
            printf("*");
        printf("\n");
    }
    return (EXIT_SUCCESS);
}

