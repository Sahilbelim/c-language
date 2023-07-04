#include<stdio.h>
void main()
{
    int row, col,col2, temp,flash;
    temp = 9;
    flash = 1;
    for (row = 1; row <= 5;row++)
    {

        for (col = 1; col <= temp;col++)
        {

            printf("_");

        }
        for (col2 = 1; col2 <= flash; col2++)
        {

          printf("%d ",row);

        }
        printf("\n");
        temp=temp-2;
        flash = flash + 2;
    }
}