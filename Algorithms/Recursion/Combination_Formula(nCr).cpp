#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)return 1;
    return fact(n-1)*n;
}
//first approach n!/(r!*(n-r)!) : using recursion to solve.
int nCr(int n,int r)
{
    int num,den;

    num=fact(n);
    den=fact(r)*fact(n-r);

    return num/den;
}
//second approach : using pascal`s triangle.
int NCR(int n,int r)
{
    if(n==r || r==0)
        return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);

}
int main()
{
    cout<<NCR(5,3)<<endl;
    return 0;
}
//first approach :
//Time complexity --> 3n == O(n).
//Space Complexity --> O(n).

//second approach :
//Time complexity --> O(n).
//Space Complexity --> O(n).


