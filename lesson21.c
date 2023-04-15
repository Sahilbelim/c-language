#include<stdio.h>
//+ - * / % =
void main()
{
    int num1, num2;

    printf("Eneter value of number 1 - ");
    scanf("%d", &num1);
    printf("Eneter value of number 2 - ");
    scanf("%d", &num2);
    if(num1%2 == 0)
    {
        printf("number 1 is even\n");
    }
    if( num1%2 == 1)
    {
        printf("number 1 is odd\n");
    }

    if(num2%2 == 0)
    {
        printf("number 2 is even\n");
    }
    if( num2%2 == 1)
    {
        printf("number 2 is odd\n");
    }

    printf("\ngood bye ......");
}