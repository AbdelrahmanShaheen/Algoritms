//link problem : https://codeforces.com/group/gA8A93jony/contest/269931/problem/J
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int grid[1000][1000];
int n;
int vis[1000][1000];
vector<int>res;
bool valid(int r,int c)//check validation of cell`s index.
{
    if(r < n && c < n && r >= 0 && c >= 0 && vis[r][c] == 0)
        return true;
    else
        return false;
}
void Halazona(int row,int column)
{
    res.push_back(grid[row][column]);
    vis[row][column] = 1;
    if(row == n/2 && column == n/2)return; //base case.

    //transition:
    if(valid(row,column+1) && !valid(row-1,column))Halazona(row,column+1);
    if(valid(row+1,column))Halazona(row+1,column);
    if(valid(row,column-1))Halazona(row,column-1);
    if(valid(row-1,column))Halazona(row-1,column);

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0 ; i<n; i++)
    {
        for(int j=0 ; j<n; j++)
        {
            cin>>grid[i][j];
        }
    }
    Halazona(0,0);
    int num = n*n;
    for (int i = 0; i < num; i++)
    {
        cout << res[i];

        ((i + 1) % n == 0) ? cout << "\n" : cout << " ";
    }

}

