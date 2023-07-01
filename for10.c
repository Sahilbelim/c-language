#include<stdio.h>
void main()
{
    int row,col,temp,flash,add;
    flash = 5;
    add = 1;

    for (row = 1; row <= 5;row++)
    {

        for (col = 1; col <= flash;col++)
        {

            printf(" ");
        }

        for (temp = 1; temp <= add;temp++)
        {
            if (row == 5 || temp == 1 || row==temp)
            {

            printf("* ");
            }
            else
            {
            printf("  ");
            }
        }
       

        printf("\n");
        flash = flash - 1;
        add = add + 1;
    }
}
// 1
// 12
// 123
// 1234
// 12345

// 1
// 22
// 333
// 4444
// 55555

// 1
// 14
// 149
// 14916
// 1461925

