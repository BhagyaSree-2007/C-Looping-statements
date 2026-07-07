/*Write a C program to find the number of digits of a number*/
#include<stdio.h>
int main()
{
        int n,c,r,o;
        printf("Enter number:");
        scanf("%d",&n);
        o=n;
        c=0;
        while (n>0)
        {
                r=n%10;
                c=c+1;
                n=n/10;
        }
        printf("Number of digits=%d\n",c);
        return 0;
}
