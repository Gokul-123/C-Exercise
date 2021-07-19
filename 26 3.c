#include <stdio.h>
void incr(int * );
int main()
{
int *ptr,a;
a=5;
ptr=&a;
incr(&a);
 printf("X is %d ",a);
return 0;
}
void incr(int *p)
{
    (*p)+=10;
    printf("X is %d ",*p);
}
