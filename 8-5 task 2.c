#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    if(n==3)
    {
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
    }
    }
    else if(n==5)
    {
        for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
    }
    }

    return 0;
}
