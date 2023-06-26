#include <stdio.h>
void main()
{
    int p, e, i,ans;

    printf("Enter exponent  : ");
    scanf("%d", &e);
    printf("Enter power  : ");
    scanf("%d", &p);

    ans = 1;
    for (i = 1; i <= p;i++)
    {
    ans = ans * e;

    }
    printf("ANSWER is %d", ans);
    // ans = ans * e;

    // ans = ans * e;

    // ans = ans * e;
}
   