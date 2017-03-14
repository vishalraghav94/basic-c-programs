//
//  main.c
//  binarytodec
//
//  Created by Apple on 15/03/16.
//  Copyright (c) 2016 Gronical App Studios. All rights reserved.
//

#include <stdio.h>
#include <math.h>
long int bin_to_dec ( long int);
int main()
{
    long int num;
    printf("Enter Binary Number : ");
    scanf("%ld" , &num );
    printf("\nDecimal Conversion : %ld" , bin_to_dec(num));
    return 0;
    
}
long int bin_to_dec ( long int num )
{
    long int dec = 0;
    int i = 0 , remainder;
    while (num != 0) {
        remainder = num % 10;
        num = num / 10;
        dec = dec + (remainder * pow(2, i));
        i++;
    }
    return dec;
}