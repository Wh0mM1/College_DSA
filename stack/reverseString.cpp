#include <iostream>
using namespace std;
string str[100];
int top=-1;

void push(string ptr,int n)
{
    if(top==n-1)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        top++;
        str[top]=ptr;
    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        cout<<str[top];
        top--;
    }
}

int main()
{
    cout<<"Enter size of string: ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element from string ";
        string ptr;
        cin>>ptr;
        push(ptr,n);
    }
    cout<<"Reversed string is: ";
    for(int i=0;i<n;i++)
    {
        pop();
    }
}