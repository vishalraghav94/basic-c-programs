//
//  main.c
//  mergearray
//
//  Created by Vishal Raghav on 30/08/16.
//  Copyright (c) 2016 Vishal Raghav. All rights reserved.
//

#include <stdio.h>
int *merge(int arr1[] , int arr2[] , int m , int n);
int main() {
    int arr1[100], arr2[100] , *result, m , n , i;
    printf("Enter number of element in arr1 : ");
    scanf("%d" , &m);
    printf("\nStart entering elements : ");
    for (i=0; i<m; i++) {
        scanf("%d" , &arr1[i]);
    }
    printf("Enter number of element in arr2 : ");
    scanf("%d" , &n);
    printf("\nStart entering elements : ");
    for (i=0; i<n; i++) {
        scanf("%d" , &arr2[i]);
    }
    result = merge(arr1, arr2, m, n);
    printf("\nMerged Array : ");
    for (i=0; i<(m+n); i++) {
        printf("%d " , result[i]);
    }
    return 0;
}
int *merge(int arr1[] , int arr2[] , int m , int n)
{
    int result[m+n+2];
    int i = 0 , j=0 , k=0 , u=0;
    while ((i<m)&&(j<n)) {
        if (arr1[i]<arr2[j]) {
            result[k] = arr1[i];
            k++;
            i++;
        }
     else if (arr1[i]>arr2[j])
     {
         result[k]=arr2[j];
         k++;
         j++;
     }
        else
        {
            result[k] = arr2[j];
            k++;
            j++;
        }
        if ((i>=m)&&(j<n)) {
            for (u=0; u<(n-j); u++) {
                result[k] = arr2[j+u];
                k++;
            }
        }
        else if ((j>=n)&&(i<m)) {
            for (u=0; u<(m-i); u++) {
                result[k] = arr1[i+u];
                k++;
            }
        }
    }
    return result;
}
