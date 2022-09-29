#include <iostream>
#include <string.h>

using namespace std;
char stack[20];
int top=-1;

void push (char ele)
{
    if(top==19)
    {
        cout<<"Overflow"<<endl;
    }
    top=top+1;
    stack[top]=ele;
}

char pop()
{
    if(top==-1)
    {
        cout<<"Underflow"<<endl;
    }
    top=top-1;
    return stack[top+1];
}

int match(char d,char e)
{
    if(d=='(' && e==')')
    {
        return 1;
    }
    if(d=='[' && e==']')
    {
        return 1;
    }
    if(d=='{' && e=='}')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int parenthesis(char exp[])
{
    for(int i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
        {
            push(exp[i]);
        }
        if(exp[i]==')' || exp[i]==']' || exp[i]=='}')
        {
            if(top==-1)
            {
                cout<<"Right parenthesis are more"<<endl;
                return 0;
            }
            char b=pop();
            int c=match(b,exp[i]);
            if(c==0)
            {
                cout<<"Mismatched Parenthesis"<<endl;
                return 0;
            }
        }
    }
    if(top==-1)
    {
        cout<<"Balanced parenthesis"<<endl;
        return 1;
    }
    else
    {
        cout<<"Left parenthesis are more"<<endl;
        return 0;
    }
}

int main()
{
    char exp[50];
    cin>>exp;
    int a=parenthesis(exp);
    if(a==1)
    {
        cout<<"Expression is valid"<<endl;
    }
    else
    {
        cout<<"Invalid expression"<<endl;
    }
    return 0;    
}