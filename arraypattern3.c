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
    int i , j,k;
    for (i =1 ; i<=number; i++) {
        for (k=1; k<=(number-i); k++) {
            printf("   ");
        }
        for (j = i; j>=1; j--) {
            printf("%d  ",j);
        }
        printf("\n");
    }
}