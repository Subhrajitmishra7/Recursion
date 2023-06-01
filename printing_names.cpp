#include<iostream>
using namespace std;
void f(int i,int N)
{
    if(i>N)
    return;
    cout<<"Subhrajit"<<endl;
    f(i+1,N);
}
int main(){
    int n;
    cin>>n;
    f(1,n);
    return 0;
}