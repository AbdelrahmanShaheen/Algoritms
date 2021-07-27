#include<iostream>
using namespace std;
//problem statement : Given a sorted (in increasing order) array A of N distinct integer numbers , 
// and given an integer X and You have to print the index of X and if X isn`t in A print -1.

int BinarySearch(int a[],int first,int last,int element )
{
    if(first <= last)
    {
        int mid =(first+last)/2;
        if(a[mid] == element)
            return mid+1;
        else if(a[mid] < element)
        {
            first=mid+1;
            return BinarySearch(a,first,last, element);
        }
        else
        {
            last = mid -1;
            return BinarySearch(a,first,last,element);
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n; i++)cin>>a[i];
    int x;
    cin>>x;
    cout<<BinarySearch(a,0,n-1,x)<<endl;
}
//Time complexity --> O(log n).
//Space complexity --> O(log n).
