#include <stdio.h>
void main()
{
    int a, b;
    float add, sub, mul, div;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("enter the value of b");
    scanf("%d", &b);
    add = a + b;
    printf(" addition of a and b is %.0f\n", add);
    sub = a - b;
    printf(" addition of a and b is %.0f\n", sub);
    mul = a * b;
    printf(" addition of a and b is %.2f\n", mul);
    div = a / b;
    printf(" addition of a and b is %.2f\n", div);
}