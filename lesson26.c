// Write a programe to print following pattern
// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 3000
#include<stdio.h>
void main()
{

    int number1,number2,sum;
    number1 = 2; //number1=2

    printf("%d ,", number1);
    number2 = 1; //number2=1
    printf("%d ,", number2);

    while (number2 < 2207)
    {

        sum = number1 + number2;
        printf("%d ,", sum); // sum = 3
        number1 = number2 + sum;
        printf("%d ,", number1); // number1=4
        number2 = number1 + sum;
        printf("%d ,", number2); // number2=7

}


    // sum = number1 + number2;

    // printf("%d ,", sum); //sum = 11
    // number1 = number2 + sum;//number1 =18

    // printf("%d ,", number1);
    // number2 = number1+sum; //number2 = 29

    // printf("%d ,", number2);
    // sum = number1 + number2;

    // printf("%d ,", sum);
}