#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>&arr,int low,int high)
{
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i] <= pivot && i <= high-1)
        i++;
        while(arr[j] > pivot && j >= low+1)
        j--;
        if(i<j)
        swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pindex = partition(arr, low, high);
        qs(arr, low, pindex - 1);
        qs(arr, pindex + 1, high);
    }
}
int main()
{
    vector<int> arr = {10, 6, 4, 2,6, 1};
    qs(arr,0,arr.size()-1);
    for(auto it : arr)
    {
        cout<<it<<" ";
    }
    return 0;
}