// 1
// 12
// 123
// 1234
// 12345



#include<stdio.h>
void main()
{
    int row, coumn;

    for (row = 1; row <= 5;row++)
    {
        for (coumn = 1; coumn <= row;coumn++)
        {
            printf("%d",coumn);
        }
        printf("\n");
    }
}




