/*Lab Assignment 4
Question No.5
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 2/2/24*/

#include <stdio.h>
int main()
{
    int a, a1, a21, a2, a3;
    printf("Enter a 3-digit number: ");
    scanf("%d", &a);
    a1= a%10;
    a3= a/100;
    a21= a/10;
    a2= a21%10;
    if (a>=100 && a<=999)
    {
    if (a1*a1*a1 + a2*a2*a2 + a3*a3*a3 == a)
    {
        printf("yes");
    }
    else 
    {
        printf("no");
    }
    }
    else 
    {
        printf("incorrect input");
    }
}