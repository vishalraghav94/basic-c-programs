#include <stdio.h>
int sum_2d ( int a , int b);
int main()
{
    int row , column ;
    printf("Enter No. of Rows :");
    scanf("%d",&row);
    printf("\nEnter No. of Column :");
    scanf("%d",&column);
    sum_2d( row, column);
    return 0;
}
int sum_2d ( int a , int b){
    int i,j , k , l ,arr[100][100] , sum = 0;
    for (i=0; i< a; i++) {
        for (j=0; j<b; j++) {
            printf("\nEnter element[%d][%d] : " , i+1 , j+1 );
            scanf("%d",&arr[i][j]);
        }
    }
    for (k=0; k< a; k++) {
        for (l=0; l<b; l++) {
            sum = sum + arr[k][l];
        }
    }
    printf("\nSum of all elements of 2-D Array = %d\n" , sum);
    return 0;
    
}