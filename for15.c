#include <stdio.h>

int main()
{
    int rows = 5; // number of rows in the pyramid
    int i, j, k;

    for (i = 1; i <= rows; i++)
    {
        // Print spaces before the numbers
        for (j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }

        // Print numbers in ascending order
        for (j = i; j <= 2 * i - 1; j++)
        {
            printf("%d ", j);
        }

        // Print numbers in descending order
        for (k = 2 * i - 2; k >= i; k--)
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
