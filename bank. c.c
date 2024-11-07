#include<stdio.h>
/*Author:Evans 
reg No:CT101/G/21698/24
*/

int main()
{
    int age;
    float salary;
    printf("enter the age:");
    scanf ("%d",&age);
    printf ("enter the salary: ");
    scanf ("%f",&salary);
    if(age>=21,salary>=21000) {
        printf ("congrats you qualify for the loan");
    }
    else
    {
        printf ("sorry but you don't qualify for the loan");
    }
    return 0;
}