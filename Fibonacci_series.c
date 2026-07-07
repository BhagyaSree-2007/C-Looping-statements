/*Write a C program to generate fibonacci series*/
#include<stdio.h>
int main()
{
        int t1=0,t2=1,res=0,c=1,n;
        printf("Enter n:");
        scanf("%d",&n);
        printf("%d,%d,",t1,t2);
        while (c<=n)
        {
                res=t1+t2;
                printf("%d,",res);
                t1=t2;
                t2=res;
                c+=1;
        }
        printf("\n");
        return 0;
}
