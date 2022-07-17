#include<stdio.h>
int main()
{
   int i,n,a;
   printf("Enter a number: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       a=i*i*i;
       printf("%d ",a);
   }
   return 0;
}
