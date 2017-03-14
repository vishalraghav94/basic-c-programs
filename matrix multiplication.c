#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void matrix_multi(int A[][MAX], int B[][MAX] , int elements);
int C[MAX][MAX];
int main()
{
    int i,j;
    int A[MAX][MAX] , B[MAX][MAX];
    printf("\nEnter Matrix(A) : ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++){
            scanf("%d",&A[i][j]);
        }
    }
    //fflush(stdin);
    printf("\nEnter Matrix(B) : ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("\nMatrix is(A) : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++){
            printf("%d   ",A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix is(B) : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++){
            printf("%d   ",B[i][j]);
        }
        printf("\n");
    }
    matrix_multi(A,B,4);
    printf("\nMultiplied matrix : \n");
      for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++){
            printf("   %d",C[i][j]);
        }
        printf("\n");
    }
}
void matrix_multi(int A[][MAX] , int B[][MAX], int elements)
{
    int i ,j,k,sum;
    for(i=0;i<elements;i++)
    {
        for(j=0;j<elements;j++){
            sum = 0;
            for(k=0;k<elements;k++)
                sum = sum + A[i][k]*B[k][j];
            C[i][j] = sum;
        }
    }
    return;
}
