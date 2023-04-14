#include<stdio.h>
void main()
{
    int temp;
    printf("Enter temperacher");
    scanf("%d", &temp);
    if(temp>100)
    {
        printf("highter temperacher");
    }
    if(temp<100)
    {
        printf("normal temperacher");
    }
    printf("\ngood bye......");
}