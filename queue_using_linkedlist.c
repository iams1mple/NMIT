#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*rear=0;
struct node*front=0;
void enqueue(int x)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(rear==0&&front==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void display()
{
    struct node*temp;
    temp=front;
    if(rear==0&&front==0)
    {
        printf("empty");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
void dequeue()
{
    struct node*temp;
    temp=front;
    if(rear==0&&front==0)
    {
        printf("empty");
    }
    else
    {
        front=front->next;
        free(temp);
    }
}
void peek()
{
    if(rear==0&&front==0)
    {
        printf("empty");
    }
    else
    {
        printf("\n%d\n",front->data);
    }
}
void main()
{
    enqueue(9);
    enqueue(1);
    enqueue(4);
    display();
    dequeue();
    display();
    peek();
  
}
