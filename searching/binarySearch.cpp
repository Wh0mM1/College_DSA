#include <bits\stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    cout << binarySearch(arr, 6, 4) << endl;
}