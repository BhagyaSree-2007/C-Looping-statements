/*Write a C program to find the sum of digits in odd positions of a number*/
#include<stdio.h>
int main()
{
        int n,s=0,r,c=0;
        printf("Enter number:");
        scanf("%d",&n);
        while (n>0)
        {
                r=n%10;
                c++;
                if (c%2!=0)
                        s=s+r;
                n=n/10;
        }
        printf("Sum of odd positions=%d\n",s);
        return 0;
}
