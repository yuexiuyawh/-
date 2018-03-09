#include <iostream>
using namespace std;
int main()
{
    int n;
    int a=0;
    int b=1;
    cin>>n;
    while(b<=n)
    {
        if(b==n) 
        {
            cout<<0<<endl;
            return 0;
        }
        int temp=a+b;
        a=b;
        b=temp;
    }
    cout<<min(n-a,b-n)<<endl;
    return 0;
}
