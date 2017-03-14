#include <stdio.h>
void pattern ( int number);
int main()
{
    int number;
    printf("Enter Number : ");
    scanf("%d",&number);
    printf("\n");
    pattern(number);
    return 0;
    
}
void pattern ( int number)
{
    int i , j;
    for (i =1 ; i<=number; i++) {
        for (j = 1; j<=i; j++) {
            printf("%d  ",j);
        }
        printf("\n");
    }
}