#include <iostream>
using namespace std;
int stack[20],top=-1;

int push(int a)
{
    if(top==19)
    {
        cout<<"Overflow"<<endl;
    }
    top=top+1;
    stack[top]=a;
}


int sortst(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(check(stack[i])<arr[i])
        {
            push(arr[i]);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int a=sortst(arr,n);
    if(a==1)
    {
        cout<<"Sorted"<<endl;
    }
    else
    {
        cout<<"Unsorted"<<endl;
    }
}