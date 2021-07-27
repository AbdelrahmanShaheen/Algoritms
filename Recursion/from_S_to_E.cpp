//link problem : https://codeforces.com/group/gA8A93jony/contest/269931/problem/H
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,a,b;
vector<string>grid;
map<pair<int,int>,int>vis;

bool valid(int r,int c)
{
    if((r < n) && (c < m) && (r >= 0) && (c >= 0) && grid[r][c] != '*' && vis[ {r,c}] != 1)
    {
        return true;
    }
    else
        return false;
}
bool reachE(int row,int column)
{
    if(grid[row][column] == 'E')
        return true;

    vis[{row,column}] = 1;

   bool ans = false;
if(valid(row,column+1)) ans = ans || reachE(row,column+1);//shift right
if(valid(row,column-1)) ans = ans || reachE(row,column-1);//shift left
if(valid(row+1,column)) ans = ans || reachE(row+1,column);//down
if(valid(row-1,column)) ans = ans || reachE(row-1,column);//up


   // vis[ {row,column}] = 0;
    return ans;


}

int main()
{
    cin>>n>>m;
    for(int i=0 ; i<n; i++)
    {
        string s="";
        for(int j=0 ; j<m; j++)
        {
            char ss;
            cin>>ss;
            if(ss == 'S')
            {
                a = i;
                b = j;
            }
            s+=ss;
        }
        grid.push_back(s);
    }
    if(reachE(a,b))cout<<"YES\n";
    else
        cout<<"NO\n";

}


/*
 another solution : same but there is a little different than the first solution.
#include<iostream>
#include<vector>
using namespace std;
vector <vector<char> > grid;
#define int long long
int n, m, start_x, start_y;
vector <vector<bool> > visited;
bool valid(int x, int y)
{
	return (x >= 0 && x < n) && (y >= 0 && y < m);
}
bool findEnd(int x, int y)
{
	if (!valid(x, y) || grid[x][y] == '*' ||  visited[x][y] == 1) return false;

	visited[x][y] = 1;//do
	//base case
	if (grid[x][y] == 'E') return true;

	//transition
	if (findEnd(x + 1, y))return true; //up
	if (findEnd(x, y + 1))return true; //right
	if (findEnd(x - 1, y))return true; //down
	if (findEnd(x, y - 1))return true; //left
	//visited[x][y] = 0;//undo
	return false;
}
signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	grid = vector<vector<char> >(n, vector<char>(m));
	visited = vector<vector<bool> >(n, vector<bool>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> grid[i][j];
			if (grid[i][j] == 'S') start_x = i, start_y = j;
		}
	}

	findEnd(start_x, start_y) ? cout << "YES\n" : cout << "NO\n";
}
*/

