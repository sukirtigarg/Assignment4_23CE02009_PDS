/*Lab Assignment 4
Question No.4
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 2/2/24*/

#include <stdio.h>
int main()
{
    int i;
    printf("Enter a no. between 1 and 7: ");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
    printf("\nMonday");
        break;
    case 2:
    printf("Tuesday");
        break;
    case 3:
    printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    
    default:
    printf("The no. is not between 1 and 7.");
        break;
    }
}