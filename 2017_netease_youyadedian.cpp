#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int sum=0;
    int n;
    cin>>n;
    int max=sqrt(n);
    vector<int> v(max+1,0);
    for(int i=0;i<v.size();++i)
        v[i]=i*i;
    if(n==max*max) sum+=4;
    int m=sqrt(n/2);
    
    for(int i=1;i<=m;++i)
    {
        if(find(v.begin(),v.end(),n-(i*i))!=v.end())
            sum+=8;
    }
    if(m*m*2==n) sum-=4;
    cout<<sum<<endl;
    return 0;
}
