#include <string>
#include <iostream>
using namespace std;
int main()
{
    string temp,temp1;
    while(getline(cin,temp1))
    {
        temp="";
        for(int i=0;i<temp1.size();)
        {
            if(temp1[i]==' ')
            {
                temp+=temp1.substr(0,i);
                temp1=temp1.substr(i+1,temp1.size()-i-1);
                i=0;
            }
            else i++;
        }
        temp+=temp1;
        if(temp.size()<=6)
            cout<<temp<<endl;
        else if(temp.size()<=14)
            cout<<temp.substr(0,6)<<" "<<temp.substr(6,temp.size()-6)<<endl;
        else
            cout<<temp.substr(0,6)<<" "<<temp.substr(6,8)<<" "<<temp.substr(14,temp.size()-14)<<endl;
    }
}
