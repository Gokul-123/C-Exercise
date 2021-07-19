#include <stdio.h>
 int main()
 {
     int a[20],b[20];
     int num,i,j,n,m;
     float average;
     float sum=1;
     float sum1=0;
     printf("enter the size of two arr :");
     scanf("%d%d",&n,&m);
     for(i=0;i<n;i++)
     {
         printf("enter the item weight :");
         scanf("%d",&a[i]);
         printf("enter the no of items:");
         for (j=0;j<m;j++)
         {
            scanf("%d",&b[i]);
            sum = sum +(a[i]*b[j]);
            sum1 = sum1+b[j];
             break;
         }
     }
     average = sum /sum1;
     printf("the average is %f",average);
     return 0;
 }
