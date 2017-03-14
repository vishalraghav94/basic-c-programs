//
//  main.c
//  bitshift
//
//  Created by Apple on 15/03/16.
//  Copyright (c) 2016 Gronical App Studios. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int *dec_bin ( int );
int *rotate ( int , int );
int binary_to_dec( int []);
int count , num;
int main()
{
    int number , bitposition , *num_rotated , *bin_prerotate , i ,rotatednumber;
    printf("Enter the integer : ");
    scanf("%d" , &number);
    printf("\nEnter the bit rotation number  : ");
    scanf("%d" , &bitposition);
    printf("\nNumber before rotating bits : ");
    bin_prerotate = dec_bin(number);
    for (i = 0; i<count; i++) {
        printf("%d" , *bin_prerotate++);
    }
    num_rotated = rotate(number , bitposition);
    rotatednumber = binary_to_dec(num_rotated);
    printf("\nRotated Number : %d" , rotatednumber);
    printf("\nRotated Number ( In Binary ) : ");
    for (i=0; i<count; i++) {
        printf("%d" , *num_rotated++);
    }
    printf("\n");
    return 0;
}
int *dec_bin ( int number )
{
    int i ;
    static int bin[50];
    count = 0;
    int num2 = number;
    while (number != 0) {
        number = number / 2;
        count++;
    }
    for (i = (count-1); i >= 0; i--) {
        bin[i] = num2 % 2;
        num2 = num2 / 2;
    }
        return bin;
}
int binary_to_dec( int arrrint[])
{
    int  i , dec = 0 , power;
    power = count - 1;
    for (i = 0; i<count; i++)
    {
        dec = dec + arrrint[i]*pow(2, (power - i));
    }
    return dec;
}

int *rotate ( int number , int bitposition)
{
    int *ptrrotate , i;
    int prerotatedbin[50];
    static int rotatedbin[50];
    ptrrotate = dec_bin(number);
    for (i=0; i<count; i++) {
        prerotatedbin[i] = *(ptrrotate++);
    }
    int loop = count - bitposition;
    for (i = 0; i < loop; i++) {
        rotatedbin[i] = prerotatedbin[i+bitposition];
    }
    int j = 0;
    for (i = loop; i < count; i++) {
        rotatedbin[i] = prerotatedbin[j++];
    }
    return rotatedbin;
}

