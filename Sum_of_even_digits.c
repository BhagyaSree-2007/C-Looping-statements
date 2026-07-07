/*Write a C program to find the sum of even digits of a number*/
#include<stdio.h>
int main()
{
        int n,s=0,r;
        printf("Enter number:");
        scanf("%d",&n);
        while (n>0)
        {
                r=n%10;
                if (r%2==0)
                        s=s+r;
                n=n/10;
        }
        printf("Sum of even digits=%d\n",s);
        return 0;
}
