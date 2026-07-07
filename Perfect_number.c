/*Write a C program to check whether a number is a perfect number or not*/
#include<stdio.h>
int main()
{
        int i=1,n,s=0;
        printf("Enter a number:");
        scanf("%d",&n);
        while (i<n)
        {
                if (n%i==0)
                        s=s+i;
                i=i+1;
        }
        if (n==s)
           printf("Perfect number\n");
        else
           printf("Not a perfect number\n");
        return 0;
}
