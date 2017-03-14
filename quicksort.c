#include<stdio.h>
#define MAX 100
void swap (int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition ( int *A , int start , int end)
{
    int pivot = A[end] , pIndex = start , i;
    for(i=start;i<end;i++)
    {
        if(A[i]>pivot){
            swap(&A[i] , &A[pIndex]);
            pIndex++;
        }
    }
    swap(&A[end] , &A[pIndex]);
    return pIndex;
}
void quicksort(int *A , int start , int end){
    if(start<end)
    {
        int pIndex = partition(A , start , end);
        quicksort(A,start , pIndex-1);
        quicksort(A,pIndex+1 , end);
    }
}
int main(){
    int i , n;
    int A[MAX];
    printf("Enter No. of Elements : ");
    scanf("%d" , &n);
    printf("\nStart Entering Elements : ");
    for(i=0;i<n;i++){
        scanf("%d" , &A[i]);
    }
    printf("Unsorted Array : ");
    for(i=0;i<n;i++){
        printf("%d " , A[i]);
    }
    quicksort(A , 0 , (n-1));
    printf("\nSorted Array : ");
    for(i=0;i<n;i++){
        printf("%d " , A[i]);
    }
    return 0;
}
