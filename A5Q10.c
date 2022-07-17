#include<stdio.h>
int main()
{
   int i,n,x;
   printf("Enter a number: ");
   scanf("%d",&n);
   for(i=1;i<=10;i++)
   {
      x=n*i;
      printf("\n%d*%d=%d\n ",n,i,x);
   }
   return 0;
}
