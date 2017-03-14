//
//  main.c
//  floyd triangle
//
//  Created by Vishal Raghav on 24/04/16.
//  Copyright (c) 2016 Vishal Raghav. All rights reserved.
//

#include <stdio.h>
void floyd ( int );
int main()
{
    int num;
    printf("Enter number to lines to print : ");
    scanf("%d" , &num);
    floyd(num);
    return 0;
}
void floyd ( int num )
{
    int i , j , num1;
    num1 = num;
    for (i=0; i<num1; i++) {
        num = 0;
        if ((i%2)==0)
        {
            num = 1;
        }
        for (j=0; j<=i; j++) {
            printf("%d " , num);
            num = !num;
        }
        printf("\n");
    }
}