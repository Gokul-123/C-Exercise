#include <stdio.h>
#include <math.h>

int main()
{
int a[20][30],i,j,n,m,sum,product;
sum=0,product=1;
printf("enter the number of size of row");
scanf("%d",&n);
printf("enter the number of size of column");
scanf("%d",&m);
printf("enter the number");
for(i=0;i<n;i++)
    for(j=0;j<m;j++)
{
    scanf("%d",&a[i][j]);
}
 for(i=0;i<n;i++)
   for(j=0;j<m;j++)
 {
     sum = sum+a[i][j];
     product = product*a[i];
 }
 printf("the sum and product value is %d %d",sum,product);
 return 0;
}
