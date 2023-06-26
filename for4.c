#include <stdio.h>
void main()
{
    int row, column,temp=6;

    for (row = 1; row <= 6;row++)
    {
        for (column = 1; column <= temp;column++)
            {
                if(row==1 || column==1 || column==temp )
                {
                printf(" *");

                }
                else
                printf("  ");
                {

                }
            }
        
            printf("\n");
            temp--;

    }
}
   