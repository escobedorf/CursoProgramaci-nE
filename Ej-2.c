/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 25 de octubre de 2021, 05:19 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a, b, c=3, d=2;
    
    a=8-5*3+2;
    b=7%3+4*2;
    
    printf("valor a = %d", a);
    printf("\nvalor b = %d", b);
    
    b%=a;
    printf("\nvalor b = %d", b);

    return (EXIT_SUCCESS);
}

