#include <stdio.h>
void push();
void pop();
void display();
void search();
int top=-1;
int stack[20],n,m,choice;
int main()
{
    printf("\n enter the Size of stack :");
    scanf("%d",&n);
    while(1)
    {
    printf("\n The Operation are :\n 1.push\n 2.Pop\n 3.display\n 4.search\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        search();
        break;
    default:
        printf("You are choice is wrong");
    }
    }
    return 0;
}
    void push()
    {
        if(top>n-1)
            printf("stack is overflow");
        else
        {
        printf("Enter the Element to be push :");
        scanf("%d",&m);
        top =top+1;
        stack[top]=m;
        }
    }
    void pop()
    {
        if(top==-1)
            printf("stack is Underflow");
        else
        {
     int a=stack[top];
     printf("the popped element is %d",a);
     top--;
        }
    }
    void display()
    {
        printf("\n The element in the stack is :");
     for (int i=0;i<=top;i++)
        printf("\n%d",stack[i]);
    }
    void search()
    {
        int sea,l,i;
      printf("Enter the element to be searched :");
      scanf("%d",&sea);
      for( i=0;i<=top;i++)
      {
          if(stack[i]==sea)
          {
            l=1;
          break;
          }
          else
            l=0;
      }
          if(l==1)
            printf("The element %d present in the %d index",sea,i);
          else
            printf("the element is not present in the stack");

    }



