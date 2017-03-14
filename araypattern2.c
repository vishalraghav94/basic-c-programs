#include <stdio.h>
void pattern ( int number);
int main()
{
    int number;
    printf("Enter number : ");
    scanf("%d",&number);
    pattern(number);
    return 0;
}
void pattern ( int number)
{
    int i , j ,k;
    for (i =1 ; i<=number; i++) {
        for (k=1; k<=(number-i); k++) {
            printf("  ");
        }

        for (j = 1; j<=i; j++) {
                        printf("%d   ",j);
        }
        printf("\n");
    }

}