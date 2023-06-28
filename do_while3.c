#include<stdio.h>
void main()
{
    int i,j,temp;
    i = 1;
    j = 1;
    temp = 5;
    do
    {
        do
        {
            if(i==1 || j==1 || j==temp)
            {
            printf("%d ",j);

            }
            else
            {
            printf("  ");
            }
            j++;
        } while (j<=temp);
        temp--;
        j = 1;
        printf("\n");
        i++;
    } while (i<=5);
   

}