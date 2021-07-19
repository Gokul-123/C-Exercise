#include <stdio.h>
#define max 10
int a[max],i,choice,n;
int front = -1;
int rear = -1;

void enqueue();
void dequeue();
void display();

int main()
{
    while(1)
    {
    printf("\nthe operation are \n 1.enqueue \n 2.Dequeue \n 3.display");
    printf("\nEnter the choice :");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1 :
         enqueue();
        break;
        case 2 :
        dequeue();
        break;
        case 3 :
        display();
        break ;
        default :
        printf("enter the correct choice ");
    }
    }
    return 0;
}
void enqueue()
{
    if (rear==max-1)
        printf("the queue is isfull");
    else if (rear==-1)
    {
        front=front+1;
        printf("enter the value to be enqueue:");
        scanf("%d",&n);
        a[front]=n;
        rear=rear+1;
    }
    else
    {
         printf("enter the value to be enqueue:");
        scanf("%d",&i);
        rear=rear+1;
        a[rear]=i;
    }
}
void dequeue()
{
    if(rear==-1 || front>rear)
        printf("queue isempty ");
    else
        front=front+1;
}
void display()
{
if (rear==-1 ||front>rear)
    printf("queue isempty");
else
    printf("element are :\n");
          for(int j=front;j<=rear;j++)
    {
        printf ("\n%d",a[j]);
    }
}
