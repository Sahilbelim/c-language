#include <stdio.h>
#include <stdlib.h>
void main()
{
    char Char;
    int num1, num2;
    float result;

    printf("Eneter value of number-1");
    scanf("%d", &num1);
    printf("Eneter value of number-2");
    scanf("%d", &num2);
    fflush(stdin);
    printf(" enter any value from a,s,m,d\n a for addition\n s for substrecsion \n m for multiplication \n d for division");
    printf(" enter value ");
    scanf("%c", &Char);
    if(Char=='a')
    {
        result = num1 + num2;
        printf(" \nresult is %.2f", result);
    }
    if(Char=='s')
    {
        result = num1 - num2;
        printf(" \nresult is %.2f", result);
    }
    if(Char=='m')
    {
        result = num1 * num2;
        printf(" \nresult is %.2f", result);
    }
    if(Char=='d')
    {
        result = num1 / num2;
        printf(" \nresult is %.2f", result);
    }
    else
    {
        printf("invalid input");
    }
   
    printf("\ngood bye");
}