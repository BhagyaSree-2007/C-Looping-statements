/*Write a C program to find sum of n natural numbers*/
#include<stdio.h>
int main()
{
        int i=1,N,s=0;
        printf("Enter N:");
        scanf("%d",&N);
        while (i<=N)
        {
                s=s+i;
                i=i+1;
        }
        printf("Sum=%d\n",s);
        return 0;
}
