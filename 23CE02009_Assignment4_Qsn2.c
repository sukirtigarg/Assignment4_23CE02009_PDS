/*Lab Assignment 4
Question No.2
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 2/2/24*/

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the nos. a, b and c:  ");
    scanf("%d%d%d", &a, &b, &c);
    switch(a>b)
    {
        case 1:
        switch(a>c)
        {
            case 1:printf("\n%d is the greatest number.", a);break;
            case 0:break;
        }
        case 0:switch(b>c)
        {
            case 1:printf("\n%d is the greatest number", b);break;
            case 0:printf("\n%d is the greatest number", c);break;
        }
    }
}  