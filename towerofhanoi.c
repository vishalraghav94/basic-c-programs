//
//  main.c
//  towerofhanoi
//
//  Created by Apple on 27/03/16.
//  Copyright (c) 2016 Gronical App Studios. All rights reserved.
//

#include <stdio.h>
int i = 1;
void toh (int , char, char, char);
int main()
{
    char source , temp , destination;
    int nod;
    source = 'S';
    temp = 'T';
    destination = 'D';
    printf("Enter number of disc in tower : ");
    scanf("%d" , &nod);
    toh ( nod , 'S' , 'T' , 'D');
    return 0;
}
void toh ( int nod , char source , char temp , char destination)
{
    if (nod >= 1) {
        toh((nod-1), source, destination, temp);
    printf("\n Step : %d %c-->%c" , i , source , destination);
        i++;
    toh((nod-1), temp, source, destination);
    }
}