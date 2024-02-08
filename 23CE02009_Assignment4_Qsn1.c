/*Lab Assignment 4
Question No.1
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 2/2/24*/

#include <stdio.h>
int main()
{
    int i;
    printf("Enter the no. ");
    scanf("%d", &i);
    switch (i%2)
    {
    case 0:
        printf("\nThe no. is even.");
        break;
    
    default:
    printf("\nThe no. is odd.");
        break;
    }
}