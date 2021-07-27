int fact(int n)//first approach
{
 if(n==0)
 return 1;
 return fact(n-1)*n;
}

int Ifact(int n) //second aaproach and more efficient than the first .
{
 int f=1,i;
 for(i=1;i<=n;i++)
 f=f*i;

 return f;
}
int main()
{
 int factorial = fact(5);
 cout<<factorial<<endl;
 return 0;
}
//first approach :
//Time Complexity --> O(n).
//Space Complexity --> O(n). 

//second approach :
//Time Complexity --> O(n).
//Space Complexity --> O(1).
