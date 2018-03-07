#include <iostream>
using namespace::std;
int main()
{
    unsigned int *task = new unsigned int[32] {0};
    int task1,task2;
    //while(1)
    //{
        cin>>task1>>task2;
        if(task1<1||task1>1024||task2<1||task2>1024)
        {
            cout<<-1<<endl;
            return 0;
        }
        task[(task1-1)/32]|=1<<((task1-1)%32);
        cout<<((task[(task2-1)/32]&1<<((task2-1)%32))==0?0:1)<<endl;
    //}
    return 0;
}
