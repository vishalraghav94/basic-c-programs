//
//  main.c
//  integerpalindrome
//
//  Created by Apple on 15/03/16.
//  Copyright (c) 2016 Gronical App Studios. All rights reserved.
//

#include <stdio.h>

long int reverse_int ( long int );
int main()
{
    long int num;
    printf("Enter the Interger : ");
    scanf("%ld" , &num);
    printf("\nReversed number = %ld" , reverse_int(num));
    if(num == reverse_int(num))
    {
        printf("\nNumber is Palindrome......");
    }
    else
        printf("\nNumber is not palindrome......");
    
    return 0;
    
}
long int reverse_int ( long int num)
{
    long int reversed = 0;
    int remainder;
    while (num != 0) {
        remainder = num % 10;
        num = num / 10;
        if (num == 0) {
            reversed = reversed + remainder;
        }
        else
            reversed = (reversed+remainder)*10;
    }
    return reversed;
}
