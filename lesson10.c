#include <stdio.h>
void main()
{
    int a, b;
    float add, sub, mul, div;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("enter the value of b");
    scanf("%d", &b);
    printf(" addition of a and b is %.0f\n", (a + b));

    printf(" subtraction of a and b is %.0f\n", (a - b));

    printf(" multiplication of a and b is %.2f\n", (a * b));

    printf(" division of a and b is %.2f\n", (a / b));
}