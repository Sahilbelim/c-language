#include<stdio.h>
void main ()
{
    int table_number,i;

    printf("Enter number of table  :  ");
    scanf("%d", &table_number);

    for (i = 1; i <= 10; i++)
    {
        printf("\n %d x %d = %d", table_number, i, (table_number * i));
    }  


    // printf("\n %d x 2 = %d", table_number, (table_number * 2));
    // printf("\n %d x 3 = %d", table_number, (table_number * 3));
    // printf("\n %d x 4 = %d", table_number, (table_number * 4));
    // printf("\n %d x 5 = %d", table_number, (table_number * 5));

}