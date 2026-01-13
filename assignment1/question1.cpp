#include <iostream>
using namespace std;
void binarySearch(int arr[] , int low , int high, int x)
{
    int mid=(low+high)/2;
    if (low>high)
    {
        return;
    }
    if(x==arr[mid])
    {
        cout<<"Element found at "<< mid;
    }
    else if(x<arr[mid])
    {
        binarySearch(arr , low , mid , x);
    }
    else if(x>arr[mid])
    {
        binarySearch(arr , mid+1 , high , x);
    }
}
int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    binarySearch(arr , 0 , 10 , 23);
}
