/*Write a C program to display odd numbers from 1 to n*/
#include<stdio.h>
int main()
{
        int c=1,n;
        printf("Enter n:");
        scanf("%d",&n);
        while (c<=n)
        {
                printf("%d,",c);
                c=c+2;
        }
        printf("\n");
        return 0;
}
