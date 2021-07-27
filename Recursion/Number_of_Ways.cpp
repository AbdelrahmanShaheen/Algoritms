// problem link :
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y

// Tree recursion problem.

#include<iostream>  
using namespace std;
#define ll long long

ll SE(ll s, ll e)
{
    static ll cnt =0 ;
    if(s<=e)
    {
        if(s == e)
            cnt++;
        SE(s+1,e);
        SE(s+2,e);
        SE(s+3,e);
    }
    return cnt;
}
int main()
{
    ll S,E;
    cin>>S>>E;
    cout<<SE(S,E)<<endl;

}
//Time complexity --> O(3^n).
//Space complexity --> O(n).

