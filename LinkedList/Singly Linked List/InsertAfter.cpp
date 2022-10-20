#include <iostream>
#include <malloc.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head= NULL;


void insertbegin()
{
    int value;
    struct node *newnode=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter element to be inserted: ";
    cin>>value;
    newnode->data=value;
    if(head==NULL)
    {
        head=newnode;
        head ->next=NULL;
    }
    else
    {
        newnode ->next=head;
        head=newnode;
    }
}

void insertAfter()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int a;
    cout<<"Enter element to be inserted ";
    cin>>a;
    newnode->data=a;
    int num;
    cout<<"Enter number after which it should be inserted: ";
    cin>>num;
    struct node *temp;
    temp=head;
    while(temp->data!=num)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void insertBefore()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int a;
    cout<<"Enter element to be inserted ";
    cin>>a;
    newnode->data=a;
    int num;
    cout<<"Enter number after which it should be inserted: ";
    cin>>num;
    struct node *temp;
    temp=head;
    struct node *temp1;
    while(temp->data!=num)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=newnode;
    newnode->next=temp;

}

void deletebegin()
{
    struct node *temp;
    temp=head;
    if(head==NULL)
    {
        cout<<"Underflow"<<endl;
    }
    else{
    if(head->next==NULL)
    {
        head=NULL;
        free(temp);
    }
    else
    {
        head=head->next;
        free(temp);
    }}
}

void deleteEnd()
{
    struct node *temp;
    struct node *temp1;
    temp=head;
    if(head==NULL)
    {
        cout<<"Underflow"<<endl;
    }
    else{
    if(head->next==NULL)
    {
        head=NULL;
        free(temp);
    }
    else
    {
        while((temp->next)!=NULL)
        {
            temp1=temp;
            temp=temp->next;
        }
        free(temp);
        temp1->next=NULL;
    }
    }
}

void deleteposition()
{
    int num;
    cout<<"Enter element to be deleted: ";
    cin>>num;
    struct node *temp;
    struct node *temp1;
    temp=head;
    for(int i=0;i<num;i++)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=temp->next;
    free(temp);
}

void insertend()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    cout<<"Enter elemnt to be inserted: ";
    cin>>value;
    newnode->data=value;
    struct node *temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    if(head==NULL)
    {
        head=newnode;
        head->next=NULL;  
        return;
    }
    while((temp->next)!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
    cout<<"Value inserted is: "<<newnode->data<<endl;
}

void display()
{
    if(head==NULL)
    {
        cout<<"Linked List is empty: "<<endl;
        return;
    }    
    struct node *temp=NULL;
    temp=head;
    cout<<"Elements in Linked List are: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    while(1)
    {
        int choice;
        cout<<"1)Insert Begin 2)Insert End 3)Display 4) Insert After 5)Insert before 6)Delete Begin 7)Delete End: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            insertbegin();
            break;
        
        case 2:
            insertend();
            break;
        case 3:
            display();
            break;
        case 4:
            insertAfter();
            break;
        case 5:
            insertBefore();
            break;
        case 6:
            deletebegin();
            break;
        case 7:
            deleteEnd();
            break;
        case 8:
            deleteposition();
            break;
        default:
            break;
        }
    }
    return 0;
}

