/*Write a C program to find the factorial of a number*/
#include<stdio.h>
int main()
{
        int i=1,N,f=1;
        printf("Enter N:");
        scanf("%d",&N);
        while (i<=N)
        {
                f=f*i;
                i+=1;
        }
        printf("Factorial=%d\n",f);
        return 0;
}
