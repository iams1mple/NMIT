#include <stdio.h>
#include <stdlib.h>
#define n 5
int a[n];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(rear==n-1)
    {
        printf("overflown");
    }
    else if(rear==-1&&front==-1)
    {
        rear=front=0;
        a[rear]=x;
    }
    else
    {
        rear++;
        a[rear]=x;
    }
}
void dequeue()
{
    if(rear==-1&&front==-1)
    {
        printf("underflown");
    }
    else if(rear==front)
    {
        front=rear=-1;
    }
    else
    { 
        printf("\nto be dequeued %d\n",a[front]);
        front++;
    }
}
void display()
{   
    int i;
    if(rear==-1&&front==-1)
    {printf("underflown");
    }
    else
    {for(i=front;i<rear+1;i++)
    printf("%d\t",a[i]);
    }
}
void peek()
{
    if(rear==-1&&front==-1)
    {
        printf("underflown");
    }
    else{
        printf("%d",a[front]);
    }
}
void main()
{
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    
    printf("\n");
    peek();
}
