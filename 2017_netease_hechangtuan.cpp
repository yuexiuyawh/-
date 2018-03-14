//动态规划
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,k,d;
    cin>>n;
    vector<int> a(n+1,0);
    for(int i=1;i<=n;++i)
        cin>>a[i];
    cin>>k>>d;
    vector<vector<long long>> dp_max(n+1,vector<long long>(k+1,0));  //dp_max[n][k]以第n个人为结尾，选取k个人的最大值
    vector<vector<long long>> dp_min(n+1,vector<long long>(k+1,0));
    for(int i=1;i<=n;++i) 
    {
        dp_max[i][1]=(long long)a[i];
        dp_min[i][1]=(long long)a[i];
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=2;j<=k;++j)
        {
            for(int m=max(0,i-d);m<i;++m)
            {
                dp_max[i][j]=max(dp_max[i][j],max(a[i]*dp_max[m][j-1],a[i]*dp_min[m][j-1]));
                dp_min[i][j]=min(dp_min[i][j],min(a[i]*dp_max[m][j-1],a[i]*dp_min[m][j-1]));
            }
        }
    }
    long long max=dp_max[n][k];
    for(int i=n-1;i>0;--i)
        if(dp_max[i][k]>max)
            max=dp_max[i][k];
    cout<<max;
    return 0;
}
