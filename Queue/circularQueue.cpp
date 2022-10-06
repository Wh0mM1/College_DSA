#include <iostream>
using namespace std;

int queue[5];
int front=-1,rear=-1;

void enqueue(int x)
{
    if((front ==0 && rear== 4)|| (front==rear+1))
    {
        cout<<"Overflow"<<endl;
        return;
    }
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
    }
    else if(rear==4)
    {
        rear=0;
    }
    else 
    {
        rear=rear+1;
    }
    queue[rear]=x;
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Underflow"<<endl;
        return;
    }
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(front==4)
    {
        front=0;
    }
    else
    {
        front=front+1;
    }
}

void display()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Underflow"<<endl;
        return;
    }
    if(front<rear)
    {
        for(int i=front;i<rear+1;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i=front;i<5;i++)
        {
            cout<<queue[i]<<" ";
        }
        for(int i=0;i<rear+1;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    while(1)
    {
        cout<<"Enter: 1)Enqueue 2)Dequeue 3)Display "<<endl;
        int choose;
        cin>>choose;
        switch (choose )
        {
        case 1:
            cout<<"Enter element to be enqueued: ";
            int a;
            cin>>a;
            enqueue(a);
            break;
        case 2:
            cout<<"Dequeued element is: "<<queue[front]<<endl;
            dequeue();
            break;
        case 3:
            cout<<"Elements in queue are: ";
            display();
            break;
        default:
            cout<<"Enter valid input: ";
            break;
        }
    }
    return 0;
}

// 10 20 30 40 50 
// 20 30 40 50
//       30 40 50 
// 60       40 50
// 60          50           
// 60 
//
