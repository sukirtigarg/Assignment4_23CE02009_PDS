/*Lab Assignment 4
Question No.3
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 2/2/24*/

#include <stdio.h>
int main()
{
    float b,s,i;
    printf("Enter the current balance\n");
    scanf("%f",&b);
    printf("Enter the credit score\n");
    scanf("%f",&s);
    if(s<600)
    i=0.15*b;
    else if (600<=s&&s<=750)
    i=0.12*b;
    else
    i=0.1*b;
    printf("the interest amount is %f",i);
}