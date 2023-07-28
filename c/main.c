/*
 * main.c
 *
 *  Created on: Jul 22, 2023
 *      Author: saif
 */


#include <stdio.h>

int main() {

    int x = 0b01010 ;
    int n = 2 ;
    x = x | (1 << n);
    printf("%d",x);

    return 0;

}

