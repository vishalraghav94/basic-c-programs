//
//  main.c
//  Binary Search using pointers
//
//  Created by Vishal Raghav on 22/04/16.
//  Copyright (c) 2016 Vishal Raghav. All rights reserved.
//

#include <stdio.h>
#define MAX 100
int arr[MAX] , size;
int binarysearch ( int );
int main()
{
    int i , number , position;
    printf("Enter Array Size : ");
    scanf("%d" ,&size);
    for (i=0; i<size; i++) {
        printf("\nEnter Element %d : ", i+1);
        scanf("%d" , &arr[i]);
    }
    printf("\nEnter the number to search : ");
    scanf("%d" , &number);
    position = binarysearch(number);
    if (position==0) {
        printf("\nNumber Not Found");
        return 0;
    }
    printf("\nPositin of number in array : %d " , position);
    return 0;
}
int binarysearch( int number )
{
    int *ptr , count = 1;
    ptr = arr;
    while (count!=size) {
        if ((*ptr) != number) {
            ptr++;
            count++;
        }
        else
            break;
    }
    if (*ptr!=number) {
        return 0;
    }
    else
    return count;
    
}