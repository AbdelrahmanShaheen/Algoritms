#include<iostream>
using namespace std;
//Taylor Series : e^x -->  1 + ((x^1)/1) + ((x^2)/2!) + ((x^3)/3!) + ((x^4)/4!)+......+n terms.
double e(int x, int n) //first approach 
{
 static double p=1,f=1;
 double r;

 if(n==0)
 return 1;
 r=e(x,n-1);
 p=p*x;
 f=f*n;
 return r+p/f;
}
//e^x : 1 + (x/1)*[1 + (x/2)*[1 + (x/3)*[1 + x/4] ] ] +......+n terms
//second approach : Taylor Series Horner`s Rule
double e(int x, int n)
{
 static double s;
 if(n==0)
 return s;
 s=1+x*s/n;
 return e(x,n-1);

}
//iterative approach
double e(int x, int n)
{
 double s=1;
 int i;
 double num=1;
 double den=1;

 for(i=1;i<=n;i++)
 {
 num*=x;
 den*=i;
 s+=num/den;
 }
 return s;
}

int main()
{
 cout<<e(4,15)<<endl; //output : 54.5979
 return 0;
}
//Time Complexity --> O(n).
//Space Complexity --> O(n). for first and second approach, o(1) for iterative approach.

