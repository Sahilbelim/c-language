#include<stdio.h>
void main()
{
  int a,b;
  printf("enter the value of a");
  scanf("%d",&a);
  printf("enter the value of b");
  scanf("%d",&b);

  if(a>b)
  {
      printf("a greter then b \n");
  }
  if(b>a)
  {
      printf("b greter then a \n");
  }
  else
  {
      printf(" a and b both are same");
  }
  
  
  printf("\ngood bye .......");
}