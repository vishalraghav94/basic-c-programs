//
//  main.c
//  PASCAL TRIANGLE
//
//  Created by Vishal Raghav on 28/04/16.
//  Copyright (c) 2016 Vishal Raghav. All rights reserved.
//

#include <stdio.h>
#include <math.h>
double factorial ( int );
int combination ( int  , int );
int digit ( int );
int main()
{
    int i , j , k ,lrows ,rows, num;
    printf("Enter how many rows you wanna print : ");
    scanf("%d" , &lrows);
    //lrows = 15;
    rows = lrows;
    for (i=1; i<=rows; i++) {
        for (j=0; j<lrows; j++) {
            printf("   ");
        }
        for (j=0; j<i; j++) {
            num = combination((i-1), j);
            printf("%d",num);
            for (k=0; k<(6-digit(num)); k++) {
                printf(" ");
            }
                }
        printf("\n");
        lrows--;
    }
}
double factorial ( int num )
{
    double fact = 1;
    if (num == 0) {
        return 1;
    }
    while (num!=0) {
        fact = fact*num;
        num--;
    }
    return fact;
}
int combination ( int n , int r)
{
    int comb;
    comb = factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}
int digit ( int num )
{
    int dig = 0;
    while (num!=0) {
        num = num/10;
        dig++;
    }
    return dig;
}