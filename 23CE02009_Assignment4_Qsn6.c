/*Lab Assignment 4
Question No.6
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 2/2/24*/

#include <stdio.h>
int main()
{
    int a, b, o;
    char c;
    printf("Enter the numbers a and b: ");
    scanf("%d%d", &a, &b);
    printf("\nEnter any operator + or - or * or /: ");
    scanf(" %c", &c);
    switch (c)
    {
    case '+':
    o = a+b;
        break;
    case '-':
    o = a-b;
        break;
    case '*':
    o = a*b;
        break;
    case '/':
    o = a/b;
        break;
    
    default:
    printf("\nInvalid number format or operator");
        break;
    }
    printf("\nOutput: %d\n", o);
}