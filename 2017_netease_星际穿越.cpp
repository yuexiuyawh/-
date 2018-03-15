#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long h,x;
    cin>>h;
    x=sqrt(h);
    if(x*x+x>h) x--;
    cout<<x;
}
