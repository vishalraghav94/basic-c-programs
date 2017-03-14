#include <stdio.h>
int prime ( int number );
int prime_req ( int num );
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    if ((num == 1) || (num <= 0)) {
        printf("\n_____Invalid Input_____");
    }
    else
    prime_req(num);
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
int prime_req ( int num )
{
    int prime_arr[100] , i , j = 0, k;
        num = num - 1;
        for (i = 2 ; i < num; i++) {
            if(prime(i)) {
                prime_arr[j] = i ;
                j++;
            }
                
        }
        printf("\nPrime numbers :");
        for (k = 0; k < j;  k++) {
            printf("%d, " , prime_arr[k]);
        }
    
    return 0;
}