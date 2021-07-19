#include <stdio.h>
main()
{
int a[3][2],i,j;
printf("enter value");
for(i=0;i<3;i++)
{
    for(j=0;j<2;j++)
    {
    scanf("%d",&a[i][j]);
    }
}
printf("elements are in the array\n");
for(i=0;i<3;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d\n",a[i][j]);
    }
}
    return 0;
}
