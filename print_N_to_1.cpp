#include<iostream>
using namespace std;
void f(int N)
{
    if(N==0)
    return ;
    cout<<N<<endl;
    f(N-1);
}
int main(){
    int n;
    cin>>n;
    f(n);
    return 0;
}