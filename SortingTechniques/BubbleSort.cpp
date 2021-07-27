#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int a[] ,int n)
{
    for(int i=0 ;i<n-1; i++)
    {
        int flag = 0;
        for(int j=0 ;j<n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j] ,a[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)break;
    }
}
int main()
{
    int arr[5] = {8 ,5 ,7 ,3 ,2};
    BubbleSort(arr ,5);
    for(int i=0 ;i<5; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
//Time Complexity :
//Best Case : O(n) if it already sorted.
//Worst Case :O(n^2).
//--------------------
//it`s stable and adaptive sorting algorithm.
