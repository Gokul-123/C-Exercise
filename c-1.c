#include <stdio.h>

int n,b,i;

char* fun(b)
{
        if(b%3==0 && b%5==0)
        {
           return "FizzBuzz";
        }
        else if(b%3==0)
         {
            return "Fizz";
         }
        else if(b%5==0)
        {
           return "Buzz";
        }
        else
           return b;
}
int main()
 {
     printf("Enter the Number :");
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
         printf("%s",fun(i));
     }
  return 0;
 }


