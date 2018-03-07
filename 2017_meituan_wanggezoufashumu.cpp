//递归
#include <iostream>
using namespace std;
int f(int x,int y)
{
    if(x==0&&y==0) return 0;
    if(x==0) return 1;
    if(y==0) return 1;
    return f(x-1,y)+f(x,y-1);
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<f(x,y)<<endl;
    return 0;
}

//排列组合
#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int m=min(x,y);
    int sum=x+y;
    long up=1;
    long down=1;
    for(int i=m;i>=2;--i)
        down*=i;
    for(int i=0;i<m;++i,--sum)
        up*=sum;
    cout<<up/down<<endl;
    return 0;
}
