//
//  main.c
//  bit position
//
//  Created by Apple on 15/03/16.
//  Copyright (c) 2016 Gronical App Studios. All rights reserved.
//

#include <stdio.h>
int *dec_bin ( int );
int bit_position ( int , int );
int count;
int main()
{
    int num , bitposition;
    printf("Enter the integer : ");
    scanf("%d" , &num);
    printf("\nEnter Bit Position : ");
    scanf("%d" , &bitposition);
    printf("\nBit at bit position %d = %d\n" ,bitposition , bit_position(num, bitposition));
    return 0;
}
int *dec_bin ( int num )
{
    int i;
    static int bin[50];
    count = 0;
    int num2 = num;
    while (num != 0) {
        num = num / 2;
        count++;
    }
    for (i = (count-1); i >= 0; i--) {
        bin[i] = num2 % 2;
        num2 = num2 / 2;
    }
 return bin;
    
}
int bit_position ( int num , int bitposition)
{
    int *ptr1 , n;
     ptr1 = dec_bin(num);
    n = (count - bitposition) - 1;
    if (*(ptr1+n) == 1) {
        return 1;
    }
    else
        return 0;
}