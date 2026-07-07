/*Write a C program to check whether a number is a prime number or not*/
#include<stdio.h>
int main()
{
   int i=2,n,f=0;
   printf("Enter a number:");
   scanf("%d",&n);
   if (n<=0)
      printf("Not prime\n");
   while (i<n)
   {
      if(n%i==0)
      {
         f+=1;
         break;
      }
      i+=1;
    }
   if (f==0)
      printf("Prime\n");
   else
      printf("Not prime\n");
   return 0;
}
