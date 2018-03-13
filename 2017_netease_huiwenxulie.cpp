#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    int res=0;
    cin>>n;
    vector<int> item(n,0);
    for(int i=0;i<n;++i)
        cin>>item[i];
    for(int i=0,j=n-1;i<j;)
    {
        int first=item[i];
        int last=item[j];
        while(first!=last)
        {
            if(i==j) break;
            if(first>last)
                last+=item[--j];
            else
                first+=item[++i];
            res++;
        }
        ++i;
        --j;
    }
    cout<<res<<endl;
    return 0;
}
