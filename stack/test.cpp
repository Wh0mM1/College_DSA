#include <iostream>
using namespace std;

int main()
{
    int t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==1 || b==1)
        {
            cout<<"No"<<endl;
        }
        else if (a%2==0 && b%2==0)
        {
            cout<<"Yes"<<endl;
        }
        else if((a%2!=0 && b%2!=0))
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}