#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *top=NULL;

void push()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter data for node: ";
    int n;
    cin>>n;
    newnode->data=n;
    if(top==NULL)
    {
        top=newnode;
        newnode->next=NULL;
        
    }
    else
    {
        newnode->next=top;
        top=newnode;
    }
}

void pop()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else if(top->next==NULL)
    {
        top=NULL;
        free(temp);
    }
    else
    {
        top=temp->next;
        free(temp);
    }
}

void peek()
{
    if(top==NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Data at top="<<top->data<<endl;
    }
}

void display()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Elements in list are: ";
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
        cout<<"Enter 1)push 2)pop 3)peek 4)display: ";
        int choice;
        cin>>choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            break;
        }
    }

}