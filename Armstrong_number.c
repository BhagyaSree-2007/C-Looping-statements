/*Write a C program to check whether a number is an armstrong number or not*/
#include<stdio.h>
#include<math.h>
int main()
{
        int n,c=0,r,o,s=0;
        printf("Enter number:");
        scanf("%d",&n);
        o=n;
        while (n>0)
        {
                c=c+1;
                n=n/10;
        }
        n=o;
        while (n>0)
        {
           r=n%10;
           s=s+pow(r,c);
           n=n/10;
        }
        if(s==o)
           printf("%d is Armstrong number\n",o);
        else
           printf("%d is not armstrong number\n",o);
        return 0;
}
