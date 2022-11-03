#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter number of in array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool flag=true;
    for(int i=0;i<=n-2;i++)
    {
        for(int j=0;j<=n-i-2;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag)
        {
            cout<<"Array got sorted in its first itteration"<<endl;
            break;
        }
    }
    cout<<"Sorted elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}  