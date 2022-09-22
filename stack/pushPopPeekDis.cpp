#include <iostream>
using namespace std;

int top=-1;
int stack[5];

int push(int x)
{
    if(top==4)
    {
        cout<<"overflow"<<endl;
    }
    else
    {
        top=top+1;
        stack[top]=x;
        cout<<"Pushed element is "<<stack[top]<<endl;
    }
}

int pop()
{
    if(top==-1)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        cout<<"Poped element is "<<stack[top]<<endl;
        top--;
    }
}

int peek()
{
    if(top==-1)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        cout<<"Top element is "<<stack[top]<<endl;
    }
}

int display()
{
    if(top==-1)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    while(1){
        cout<<"1)Push 2)Pop 3)Peek 4)Display"<<endl;
        int choice;
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"Enter element to be pushed ";
                int x;
                cin>>x;
                push(x);
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
