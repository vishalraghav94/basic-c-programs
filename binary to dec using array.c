//
//  main.c
//  binary to dec using array
//
//  Created by Apple on 16/03/16.
//  Copyright (c) 2016 Gronical App Studios. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
int binary_to_dec( char []);
int num;
int main()
{
    char binchar[100];
    int decimal;
    printf("Enter number : ");
    scanf("%s" , binchar);
    decimal = binary_to_dec(binchar);
    printf("\nDecimal Number : %d \n" , decimal);
    return 0;
}
int binary_to_dec( char binchar[])
{
    int arrint[100] , i , dec = 0 , power;
    num = (int) strlen(binchar);
    power = num - 1;
    for (i = 0; i<num; i++)
    {
        arrint[i] = ((int) binchar[i] - 48);
        dec = dec + arrint[i]*pow(2, (power - i));
    }
    return dec;
    }
