#include <stdio.h>
int main()
{
 	int fragment[20],b[20],p[20],i,j,nb,np,tem,low=9999;
	static int b_array[20],p_array[20];
    printf("\t-----OUTPUT------\n");
	printf("Memory Management Scheme - Best Fit");
 	printf("\nEnter the number of processes:");
	scanf("%d",&np);
 	printf("\nEnter the number of blocks:");
    scanf("%d",&nb);
 	printf("\nEnter the size of the blocks:-\n");
	for(i=1;i<=nb;i++)
    	{
		 printf("Block number.%d:",i);
         scanf("%d",&b[i]);
     	}
 	printf("\nEnter the size of the processes :-\n");
	for(i=1;i<=np;i++)
    {
        printf("Process number.%d:",i);
        scanf("%d",&p[i]);
    }
	for(i=1;i<=np;i++)
	{
		for(j=1;j<=nb;j++)
		{

			if(b_array[j]!=1)
			{
				tem=b[j]-p[i];
				if(tem>=0)
					if(low>tem)
					{
						p_array[i]=j;
						low=tem;
					}
			}
		}
		fragment[i]=low;
		b_array[p_array[i]]=1;
		low=10000;
	}
printf("\nProcess_number \tProcess_size\tBlock_number \tBlock_size\tFragment");
	for(i=1;i<=np && p_array[i]!=0;i++)

		printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,p[i],p_array[i],b[p_array[i]],fragment[i]);
		return 0;
}
