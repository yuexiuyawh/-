//先确定位置在填入数据
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T)
    {
        int n,k,temp,j;
        cin>>n>>k;
        vector<int> a(2*n,0);
        for(int i=0;i<2*n;++i)
        {
            cin>>temp;
            j=i;
            int kk=k;
            while(kk)
            {
                if(j<n) j*=2;
                else j=(j-n)*2+1;
                kk--;
            }
            a[j]=temp;
        }
        for(int i=0;i<a.size()-1;++i)
            cout<<a[i]<<" ";
        cout<<a[a.size()-1]<<endl;
        T--;
    }
    return 0;
}


//暴力运算
#include<iostream>
#include<vector>
using namespace std;

void wash(vector<int> &a)
{
    vector<int> a1(a.size()/2,0),a2(a.size()/2,0);
    for(int i=0;i<a.size()/2;++i)
    {
        a1[i]=a[i];
        a2[i]=a[i+a.size()/2];
    }
    for(int i=0;i<a.size()/2;++i)
    {
        a[2*i]=a1[i];
        a[2*i+1]=a2[i];
    }
}

int main()
{
    int T;
    cin>>T;
    while(T)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(2*n,0);
        for(int i=0;i<n;++i)
        {
            cin>>a[2*i]>>a[2*i+1];
        }
        for(int i=k;k>0;--k)
            wash(a);
        for(int i=0;i<a.size()-1;++i)
            cout<<a[i]<<" ";
        cout<<a[a.size()-1]<<endl;
        T--;
    }
    return 0;
}

