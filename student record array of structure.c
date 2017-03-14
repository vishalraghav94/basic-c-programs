//
//  main.c
//  student record array of structure
//
//  Created by Apple on 15/04/16.
//  Copyright (c) 2016 Gronical App Studios. All rights reserved.
//

#include <stdio.h>
#define MAX 20
struct student{
    char name[MAX];
    float maths , physics , chemistry , percentage;
};
struct student stu[MAX];
int main()
{
    int i , count;
    printf("How Many Records : ");
    scanf("%d" , &count);
    for (i=0; i<count; i++) {
        printf("\nEnter record of student %d --" ,i+1 );
        printf("\nEnter Name : ");
        scanf("%s" ,stu[i].name);
        printf("\nEnter Maths Marks : ");
        scanf("%f" , &stu[i].maths);
        printf("\nEnter physics Marks : ");
        scanf("%f" , &stu[i].physics);
        printf("\nEnter chemistry Marks : ");
        scanf("%f" , &stu[i].chemistry);
        stu[i].percentage = 0;
        stu[i].percentage = ((stu[i].maths) + (stu[i].physics) +(stu[i].chemistry))/3;
    }
    printf("\n____Record Saved___");
    for (i=0; i<count; i++) {
        printf("\nPercentage of %s : %.2f%% " , stu[i].name , stu[i].percentage);
    }
    return 0;
}
