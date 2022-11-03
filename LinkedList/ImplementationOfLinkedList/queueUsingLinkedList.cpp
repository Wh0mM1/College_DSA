#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;

void insertFront()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    int n;
    cout<<"Enter element: ";
    cin>>n;
    newnode->data=n;
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
        newnode->next=NULL;
    }
    else
    {
        newnode->next=front;
        front=newnode;
    }
}

void deleteEnd()
{
    struct node *temp;
    struct node *temp1;
    temp=front;
    if(temp==NULL)
    {
        cout<<"No element in linked list"<<endl;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp1=temp;
            temp=temp->next;
        }
        rear=temp1;
        rear->next=NULL;
         free(temp);
    }
}

void display()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Elements in Queue are: ";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}

int main()
{
    while(1)
    {
        cout<<"Enter 1)Insert Begin 2)Delete End 3)Display: ";
        int choice;
        cin>>choice;
        switch (choice)
        {
        case 1:
            insertFront();
            break;
        case 2:
            deleteEnd();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }
}