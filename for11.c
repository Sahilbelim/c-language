#include<stdio.h>
void main()
{
    int row, col_1, col_2, temp,flash;
    temp = 5;
    flash = 1;

    for (row = 1; row <= 5;row++)
    {
        for (col_1 = 1; col_1 <= flash;col_1++)
        {
            printf(" ");
        }
        for (col_2 = 1; col_2 <= temp; col_2++)
        {
            if (row==1 || col_2==1 || col_2==temp)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            
           
        }   

        printf("\n");
        flash = flash + 1;
        temp = temp - 1;
    }

}

// -* * * * *
// --*     *
// ---*   *
// ----* *
// -----*



// -* * * * *
// --* * * *
// ---* * *
// ----* *
// -----*
// -
// --
// ---
// ----
// -----
// *****
// ****
// ***
// **
// *

// -*

// ------*****

// ------*****
// ------*****
// ------*****
// ------*****
// ------*****


// -* * * * *
// --* * * *
// ---* * *
// ----* *
// -----*