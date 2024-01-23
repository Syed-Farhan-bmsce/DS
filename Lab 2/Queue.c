// write a program to simulate the working of the queue of integers using an array. Provide the following operations: Insert, delete, display. The program should print appropriate message for overflow and underflow condition.

#include<stdio.h>
#include<string.h>
#define MAX 50

int queue_array[MAX];
int rear = -1;
int front = -1;

display()
{
    int i;
    if (front == -1)
    {
        printf("Queue is Empty \n");
    }
    else
    {
        printf("Queue is: \n");
        for(i=front; i<=rear; i++)
        {
            printf("%d", queue_array[i]);
            printf("\n");
        }
    }
}

void main()
{
    int choice;
    while(1)
    {
        printf("\n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit \n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: insert();
            break;

            case 2: delete();
            break;

            case 3: display();
            break;

            case 4: exit(1);
            break;

            default: printf("Invalid Choice \n");
        }
    }
}

insert()
{
    int add_item;
    if(rear == MAX-1)
    {
        front =0;
        printf("Insert the Element in Queue: \n");
        scanf("%d", &add_item);
        rear = rear +1;
        queue_array[rear]=add_item;
    }
}

delete()
{
    if(front == -1 || front> rear)
    {
        printf("Queue Underflow \n");
        return;
    }
    else
    {
        printf("Deleted Element is: %d\n", queue_array[front]);
        front = front +1;
    }
}



