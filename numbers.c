/*Write a C program to display numbers from 1 to n*/
#include<stdio.h>
int main()
{
        int i=1,n;
        printf("Enter n:");
        scanf("%d",&n);
        while (i<=n)
        {
                printf("%d,",i);
                i=i+1;
        }
        printf("\n");
        return 0;
}
