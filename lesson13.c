#include<stdio.h>
void main()
{
    int num1, num2;

    printf("Eneter value of number-1");
    scanf("%d", &num1);
    printf("Eneter value of number-2");
    scanf("%d", &num2);
    if(num1<num2)
    {
        printf(" number 2 greter then number 1 \n");
        printf("bigest number is %d\n", num2);
    }
    if (num1>num2)
    {
        printf(" number 1 greter then number 2\n ");
        printf("bigest number is %d\n", num1);
    }
    printf("\ngood bye.....");
}