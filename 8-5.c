#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
{
    if(i%3==0&&i%5!=0)
    {
        printf("fizz\n");
    }
    else if(i%5==0&&i%3!=0)
    {
     printf("buzz\n");
    }
    else if(i%3==0&&i%5==0)
    {
        printf("fizzbuzz\n");
    }
    else
    {
        printf("%d\n",i);
    }
}
return 0;
}
