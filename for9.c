// ____*
// ___* *
// __* * *
// _* * * * 
// * * * * *

#include<stdio.h>
void main()
{

    int row, col, temp,col_2;
    temp = 5;

    for (row = 1; row <= 5;row++)
    {


        for (col = 1; col <= temp;col++)
        {
            printf(" ");

        }
        for (col_2 = 1; col_2 <= row;col_2++)
        {

            printf("* ");
        }
        

        printf("\n");
        temp--;
    }





}