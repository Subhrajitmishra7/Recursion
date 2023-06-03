#include <iostream>
#include <vector>
using namespace std;
void sub(int ind, vector<int> &ds, int arr[], int n)
{
    if (ind == n)
    {
        for (auto itr : ds)
        {
            cout << itr << "";
        }
    if(ds.size() == 0)
    cout<<"{}";
    cout << endl;
    return;
    }
    // We have a choice of whether to take or not take any element
    ds.push_back(arr[ind]); // this implements take
    sub(ind + 1, ds, arr, n);
    ds.pop_back(); // this implements not take
    sub(ind + 1, ds, arr, n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<endl;
    vector<int> ds;
    sub(0, ds, arr, n);
    return 0;
}