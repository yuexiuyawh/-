#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class loc
{
public:
    int x,y;
    loc(int _x,int _y){x=_x;y=_y;}
};
int main()
{
    int n,m;
    char temp;
    cin>>n>>m;
    vector<vector<int>> max_step(n,vector<int>(m,-2));
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>temp;
            if(temp=='.') max_step[i][j]=-1;
        }
    }
    int x,y;
    cin>>x>>y;
    max_step[x][y]=0;
    queue<loc> q;
    q.push(loc(x,y));
    int steps;
    cin>>steps;
    vector<vector<int>> step(steps,vector<int>(2,0));
    for(int i=0;i<steps;++i)
    {
        cin>>step[i][0]>>step[i][1];
    }
    while(!q.empty())
    {
        loc l=q.front();
        q.pop();
        for(int i=0;i<steps;++i)
        {
            int x1=l.x+step[i][0];
            int y1=l.y+step[i][1];
            if(x1<0||x1>=n||y1<0||y1>=m)
                continue;
            if(max_step[x1][y1]==-1)
            {
                max_step[x1][y1]=max_step[l.x][l.y]+1;
                q.push(loc(x1,y1));
            }
        }
    }
    int res=0;
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
        {
            if(max_step[i][j]==-1)
            {
                cout<<-1;
                return 0;
            }
            else res=max(res,max_step[i][j]);
        }
    cout<<res;
    return 0;
}
