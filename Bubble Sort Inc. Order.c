//
//  main.c
//  Bubble Sort Inc. Order
//
//  Created by Apple on 15/04/16.
//  Copyright (c) 2016 Gronical App Studios. All rights reserved.
//

#include <stdio.h>
#define MAX 20
int count = 0;
int arr[MAX];
void bubblesort();
void swap ( int * , int *);
int main()
{
    int  i;
    printf("How Many Element : ");
    scanf("%d" , &count);
    for (i=0; i<count; i++) {
        printf("\nEnter element arr[%d] : " , i);
        scanf("%d" , &arr[i]);
    }
    printf("\nInput Array : ");
     for (i = 0; i<count; i++) {
    printf("%d," , arr[i]);
    }
    bubblesort();
    printf("\nSorted Array : ");
   for(i = 0; i<count; i++) {
        printf("%d," , arr[i]);
    }
    printf("\b \b");
    return 0;
}
void bubblesort ()
{
    int *ptr1 , *ptr2 , flag,tempcount;
    while (1) {
        tempcount = count;
        flag = 0;
       ptr1 = arr;
    ptr2 = &arr[1];
        while (tempcount!=1) {
            if ((*ptr1)>(*ptr2)) {
                swap(ptr1 , ptr2);
                flag = 1;
            }
            ptr1++;
            ptr2++;
            tempcount--;
        }
        if (flag == 0) {
            break;
        }
    }
}
void swap ( int *p1,int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

