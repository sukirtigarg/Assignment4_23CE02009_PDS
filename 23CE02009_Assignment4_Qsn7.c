/*Lab Assignment 4
Question No.7
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 2/2/24*/

#include <stdio.h>
int main()
{
    int a, price;
    printf("Enter the age:");
    scanf("%d",&a);
    if (a<5)
    price=0;
    else if (a>=5 && a<=12)
    price=20;
    else if (a>12 && a<=59)
    price=50;
    else 
    price=50-0.2*50;
    printf("the ticket price is %d",price);
}
