#include<bits/stdc++.h>
using namespace std;
#define ll long long
char grid[1000][1000];
int n,m;
int cnt = 0;
map<pair<int,int>,int>vis;
bool valid(int r,int c)//check validation of cell`s index.
{
    if(r < n && c < m && r >= 0 && c >= 0 && vis[ {r,c}] == 0)
        return true;
    else
        return false;
}
void connectedCells(int row,int column)
{
    cnt++;
    vis[ {row,column}] = 1; //do

    if(valid(row,column+1) && grid[row][column+1] == grid[row][column]) connectedCells(row,column+1);//right
    if(valid(row,column-1) && grid[row][column-1] == grid[row][column]) connectedCells(row,column-1);//left
    if(valid(row+1,column) && grid[row+1][column] == grid[row][column]) connectedCells(row+1,column);//down
    if(valid(row-1,column) && grid[row-1][column] == grid[row][column]) connectedCells(row-1,column);//up
}
int main()
{
    cin>>n>>m;
    for(int i=0 ; i<n; i++)
    {
        for(int j=0 ; j<m; j++)
        {
            cin>>grid[i][j];
        }
    }
    int ans = 0;
    for(int i=0 ; i<n; i++)
    {
        for(int j=0 ; j<m; j++)
        {
            if(vis[ {i,j}] == 0)
            {
                connectedCells(i,j);
                if(cnt > 0)ans++;
                cnt =0;
            }
        }
    }
    cout<<ans<<endl;
}


