
// 1
// 22
// 333
// 4444
// 55555
// https://i1.faceprep.in/fp/articles/img/55984_1580817324.png

#include<stdio.h>
void main()
{
    int row, coumn;

    for (row = 1; row <= 5;row++)
    {
        for (coumn = 1; coumn <= row;coumn++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
}




