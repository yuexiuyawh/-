#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Box
{
public:
	int x, y, z, order;
	Box(int _x, int _y, int _z) { x = _x; y = _y; z = _z; order = 0; }
	bool canBeAbove(Box a) { if (a.x>x || a.y>y || a.z>z) return false; return true; }
};
int heightcal(vector<Box> b)
{
	int sum = 0;
	for (Box box : b)
	{
		sum += box.z;
	}
	return sum;
}
vector<Box> maxheight(vector<Box> b, int bottom, map<int, vector<Box>> &dp)
{
	if (dp.find(bottom) != dp.end())
		return dp[bottom];
	int height = 0;
	vector<Box> maxvector;
	for (int j = 0; j<b.size(); ++j)
	{
		if (j == bottom) continue;
		if (b[bottom].canBeAbove(b[j]))
		{
			vector<Box> newvector = maxheight(b, j, dp);
			int newheight = heightcal(newvector);
			if (newheight>height)
			{
				height = newheight;
				maxvector = newvector;
			}
		}
	}
	maxvector.insert(maxvector.begin(), b[bottom]);
	dp[bottom] = maxvector;
	return maxvector;
}
int main()
{
	int n;
	cin >> n;
	vector<Box> b(n, Box(0, 0, 0));
	for (int i = 0; i<n; ++i)
	{
		cin >> b[i].x >> b[i].y >> b[i].z;
		b[i].order = i;
	}
	map<int, vector<Box>> dp;
	int h = 0, base = 0;
	for (int i = 0; i<n; ++i)
	{
		int newh = heightcal(maxheight(b, i, dp));
		if (newh>h)
		{
			h = newh;
			base = i;
		}
	}
	cout << h << " " << base << endl;
	for (Box box : dp[base])
		cout << box.order << " ";
	return 0;
}
