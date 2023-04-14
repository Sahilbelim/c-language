#include <stdio.h>
void main()
{
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    if (age > 18)
    {
        printf(" are you alegeble to voting");

    }
    if (age < 18)
    {
        printf(" you are not alegeble to voting");
    }
    printf("\nyour age is %d", age);
    printf("\ngood bye.....");
}