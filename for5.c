#include<stdio.h>
void main()
{
    int row, coumn;

    for (row = 1; row <= 5;row++)
    {
        for (coumn = 1; coumn <= (6-row);coumn++)
        {
            printf(" ");
       }
        for (coumn = 1; coumn <= row;coumn++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
}

