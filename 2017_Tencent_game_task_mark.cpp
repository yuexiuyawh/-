#include <iostream>
using namespace::std;
int main()
{
    unsigned int *task = new unsigned int[32] {0};
    int task1,task2;
    while(cin>>task1>>task2)
    {
        if(task1<1||task1>1024||task2<1||task2>1024)
        {
            cout<<-1<<endl;
            return 0;
        }
        task[(task1-1)/32]|=1<<((task1-1)%32);
        cout<<((task[(task2-1)/32]&1<<((task2-1)%32))==0?0:1)<<endl;
    }
    return 0;
}

//非正常
#include <iostream>
using namespace std;
int main()
{
    int t1,t2;
    cin>>t1>>t2;
    if(min(t1,t2)<1||max(t1,t2)>1024)
    {
        cout<<-1;
        return 0;
    }
    if(t1==t2) cout<<1;
    else cout<<0;
    return 0;
}
