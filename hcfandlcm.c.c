#include <stdio.h>
#include <stdlib.h>
int prime ( int number );
int factor ( int num , int array[100] );
int arrcpy ( int *p1 , int *p2);
int hcf ( int arr_1[100] , int arr_2[100]);
int arr1[100] , arr2[100];
int main () {
    int num1 , num2 , hcf_value;
    printf("Enter the number1 : ");
    scanf("%d" , &num1);
    printf("Enter the number2 : ");
    scanf("%d" , &num2);
    //num1_arr = factor(num1);
    //num2_arr = factor(num2);
    factor( num1 , arr1) ;
    factor (num2 , arr2 );
    hcf_value = hcf (arr1 , arr2);
    printf("\nHCF : %d \n" , hcf_value);
    return 0;
}
int prime ( int number )
{
    int i , j = 0;
    for (i = 2; i <= number/2; i++) {
        if ( (number % i) == 0)
            j++;
        else
            continue;
    }
    if (j == 0)
        return 1;
    else
        return 0;
    
}
int factor ( int num , int array[100] )
{
    int temp = num;
    int prime_arr[100] , i , j = 0 , k , count , l;
    int factors[100];
    num = num - 1;
    for (i = 2 ; i < num; i++) {
        if(prime(i)) {
            prime_arr[j] = i ;
            j++;
        }
        
    }
    for (k = 0 , count = 0; k < j;) {
        if (temp % prime_arr[k] == 0) {
            temp = temp / prime_arr[k];
            factors[count] = prime_arr[k];
            count++;
        }
        else
            k++;
        
    }
    factors[count] = -1;
    arrcpy ( array , factors );
    if ( count == 0)
        printf("\nNo Factors as the number given is a prime number   ");
    else {
        printf("\nFactors of the given number : ");
        for ( l = 0; l < count;  l++) {
            printf("%d, " , array[l]);
        }
    }
    return 0;
}
int hcf ( int arr_1[] , int arr_2[])
{
    int hcf_val = 1 ;
    int i;
    for (i = 0; i < 100 ; i++) {
        if ((arr_1[i] != -1)&&(arr_2[i] != -1))
        {
            if (arr_1[i] == arr_2[i])
                hcf_val = hcf_val * arr_1[i];
            else
                continue;
        }
        else
            break;
    }
    return hcf_val;
}

int arrcpy ( int *p1 , int *p2)
{
    int i;
    for ( i = 0 ; i < 100 ; i++ , p1++ , p2++)
        *p1 = *p2;
    return 0;
}