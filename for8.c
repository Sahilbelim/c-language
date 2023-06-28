#include<stdio.h>
void main()
{

    int row,col,temp=5;

    for (row = 1; row <= 5;row++)
    {

        for (col = 1; col <= temp;col++)
        {

            printf("* ");
        }

        temp--;
        printf("\n");

    }

}