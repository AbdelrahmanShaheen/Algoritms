#include<iostream>
using namespace std;
int power(int m,int n) //first approach
{
 if(n == 0)
 return 1;
 return power(m,n-1)*m;
}
int power1(int m,int n) //second approach : is more efficient than the first in time and memory.
{
 if(n == 0)
 return 1;
 if(n%2 == 0)
 return power1(m*m,n/2);
 else
 return m * power1(m*m,(n-1)/2);
}
int main()
{
 int p=power1(2,5);
 cout<<p<<endl;
 return 0;
}
//first approach and second approach :
//Time Complexity --> O(n).
//Space Complexity --> O(n).
