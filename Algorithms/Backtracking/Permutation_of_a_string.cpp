#include <bits/stdc++.h>
using namespace std;
int vis[4] = {};
char result[3];
void Permutaion(string s ,int n)
{
    if(n == s.size()) //base case.
    {
        cout<<result<<endl;
        return;
    }
    else
    {
        for(int i=0 ;i<s.size(); i++)
        {
            if(vis[i] == 0)
            {
                result[n] = s[i];
                vis[i] = 1; //do
                //recursion
                Permutaion(s ,n+1);
                //backtrack
                vis[i] = 0;//undo
            }
        }

    }

}
int main() {
    string p = "ABC";
    Permutaion(p ,0);
}
//Output : ABC ACB BAC BCA CAB CBA   
//Backtrack + Brute force problem
