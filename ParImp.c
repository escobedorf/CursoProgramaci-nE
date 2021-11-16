/* 
 * File:   ParInp.c
 * Author: Francisco Escobedo
 *
 * Created on 16 de noviembre de 2021, 04:43 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int num;
    
    printf ("Numero PAR o IMPAR\n");
    printf  ("Digite un numero: ");
    scanf ( "%d" ,&num);
    if(num % 2 == 0){
        printf ("El numero %d es par.", num);
    }
    if(num % 2 != 0){
        printf ("El numero %d es impar.", num);
    }
    
    return (EXIT_SUCCESS);
}

