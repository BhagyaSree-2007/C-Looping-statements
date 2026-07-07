/*Write a C program to find the factors of a number*/
#include<stdio.h>
int main()
{
        int i=1,n;
        printf("Enter n:");
        scanf("%d",&n);
        while (i<=n)
        {
                if (n%i==0)
                        printf("%d,",i);
                i=i+1;
        }
        printf("\n");
        return 0;
}
