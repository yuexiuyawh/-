#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    int res=0;
    cin>>n;
    vector<int> a(n,0);
    int sum;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int ave=sum/n;
    if(sum%n!=0)
        cout<<-1;
    else
    {
        for(int i=0;i<n;++i)
        {
            if((a[i]+ave)%2!=0)
            {
                cout<<-1;
                return 0;
            }
            else
            {
                if(a[i]>ave)
                    res+=(a[i]-ave)/2;
            }
        }
        cout<<res;
    }
    return 0;
}
