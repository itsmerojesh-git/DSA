#include<stdio.h>
#define SIZE 5
void enQueue(int);
void deQueue();
void display();

int lQueue[SIZE], front = -1, rear = -1;

int main()
{
    int choice, value;
   
    while(1){
        printf("\n****** LINEAR QUEUE ******\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("\nEnter the value to be inserted:  ");
                    scanf("%d", &value);
                    enQueue(value);
                    break;
            case 2: deQueue();
                    break;
            case 3: display();
                    break;
            case 4: return 0;
            default: printf("\nPlease select the correct choice!!!\n");
        }
    }
}

void enQueue(int value)
{
    if(rear == SIZE - 1)
        printf("\nLinear Queue is Full! Insertion not possible!!!\n");
    else{
        if(front == -1)
            front = 0;
        lQueue[++rear] = value;
        printf("\nInsertion Success!!!\n");
    }
}

void deQueue()
{
    if(front == -1 || front > rear)
        printf("\nLinear Queue is Empty! Deletion is not possible!!!\n");
    else{
        printf("\nDeleted element : %d\n", lQueue[front++]);
        if(front > rear)
            front = rear = -1;
    }
}

void display()
{
    if(front == -1)
        printf("\nLinear Queue is Empty!!!\n");
    else{
        int i;
        printf("\nLinear Queue Elements are : \n");
        for(i = front; i <= rear; i++)
            printf("%d\t", lQueue[i]);
        printf("\n");
    }
}

