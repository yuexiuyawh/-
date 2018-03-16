#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int j=0;
    for(int i=0;i<s1.size();++i)
    {
        if(s1[i]==s2[j])
        {
            ++j;
            if(j==s2.size())
                break;
        }
    }
    if(j==s2.size())
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}

#include<iostream>
#include<map>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int j=0;
    for(int i=0;i<s2.size();++i)
    {
        if(j>=s1.size())
        {
            cout<<"No";
            return 0;
        }
        while(s1[j]!=s2[i])
        {
            ++j;
            if(j>=s1.size())
            {
                cout<<"No";
                return 0;
            }
        }
        ++j;
            
    }
    cout<<"Yes";
    return 0;
}
