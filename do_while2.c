#include<stdio.h>
void main()
{

    int i,sq;
    i = 1;

    do
    {

    sq = i * i;
    printf("%d , ", sq);
    i++;
    } while (i<=10);

    printf("loop stop");

    // sq = i * i;
    // printf("%d", sq);
    // i++;
    // sq = i * i;
    // printf("%d", sq);

}

