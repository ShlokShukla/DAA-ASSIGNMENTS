#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j)
    {
        while(arr[i]<pivot && i<=high-1)
        {
            i++;
        }
        while(arr[j]>pivot && j>=low+1)
        {
            j--;
        }

        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[0],arr[j]);
    return j;
}

void qs(int arr[], int low, int high)
{
    if(low>=high)
    {
        return;
    }
    int part= partition(arr , low , high);
    qs(arr , low , part-1);
    qs(arr , part+1 , high);
}

int main()
{
    int arr[] = {4,2,6,9,2};
   
}
