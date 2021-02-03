#include<iostream>
using namespace std;
int sum(int n) //first approach.
{
    if(n==0)
        return 0;
    return sum(n-1)+n;
}

int Isum(int n)  //second approach and efficient than first..
{
    int s=0,i;
    for(i=1; i<=n; i++)   s=s+i;
    return s;
}

int IIsum(int n) //third approach : using mathematical exp is efficient than any solution in this problem.
{
    return n*(n+1)/2;
}

int main()
{
    int S=sum(5);
    cout<<S<<endl;
    return 0;
}
//in first  approach :
//Time Complexity --> O(n).
//Space Complexity --> O(n).

//in second approach :
//Time Complexity --> O(n).
//Space Complexity --> O(1).

//in third approach :
//Time complexity --> O(1).
//Space Complexity --> O(1).
