// https : // i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include <stdio.h>
        void
        main()
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
   