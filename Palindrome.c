/*Write a C program to check whether a number is a palindrome or not*/
#include<stdio.h>
int main()
{
        int n,s=0,ori,r;
        printf("Enter number:");
        scanf("%d",&n);
        ori=n;
        while (n>0)
        {
                r=n%10;
                s=(s*10)+r;
                n=n/10;
        }
        if(s==ori)
                printf("%d is a palindrome\n",ori);
        else
                printf("%d is not a palindrome\n",ori);
        return 0;
}
