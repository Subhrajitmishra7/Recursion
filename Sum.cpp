#include<iostream>
using namespace std;
//Functional Way 
// int Sum(int n)
// {
//     if(n==0)
//     return 0;
//     return n + Sum(n-1);
// }
//Parameterized Way
int Sum(int i,int sum)
{
    if(i==0)
    cout<<sum;
    Sum(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    cout<<Sum(n,0);
    return 0;
}