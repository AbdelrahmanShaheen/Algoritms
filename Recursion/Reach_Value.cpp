// problem link :
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W

// Tree recursion problem.

#include<iostream>
using namespace std;
bool flag = false;
#define ll long long
void Rv(ll x,ll value)
{
    if(x <= value)
    {
        if(x == value)flag =true;
        
        Rv(x*10,value);
        Rv(x*20,value);
    }
}
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        Rv(1, x);
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        flag = false;
    }
}
//Time complexity --> O(2^n).
//Space complexity --> O(n).

