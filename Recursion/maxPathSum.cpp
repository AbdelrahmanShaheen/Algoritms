#include<bits/stdc++.h>
using namespace std;
#define ll long long
//link of the problem: https://codeforces.com/group/gA8A93jony/contest/269931/problem/N
//Given grid of positive and negative numbers, Start from 0, 0 and end at n, n. Move only to right and down - find path with sum of numbers is maximum.
ll n,m;
ll grid[100][100];
bool valid(int r,int c)
{
    if(r == n || c == m)
        return false;
    else
        return true;
}
ll MaxPath(int row,int column)
{
    if(!valid(row,column))
        return -1000000;
    ll path1 = MaxPath(row,column+1);
    ll path2 = MaxPath(row+1,column);
    if(path1 == -1000000 && path2 == -1000000){
        path1 = 0;
        path2 = 0;
    }
    return grid[row][column]+max(path1,path2);
}
int main()
{

    cin>>n>>m;
    for(int i=0 ;i<n; i++)
    {
        for(int j=0 ;j<m; j++)
            cin>>grid[i][j];
    }
    cout<<MaxPath(0,0)<<endl;
}

