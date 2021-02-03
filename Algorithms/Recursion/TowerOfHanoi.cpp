/*
assume that we have 3 towers A,B and C ,and there are some disks in tower A .
what are the steps to transfer disks from A to C ?
Algoritm to solve this problem : 

1-assume there is one disk in tower A and we need to take it from A to C :
just take it from A --> C in one step.

2-assume there are two disks in tower A :
  1-transfer disk 1 from A to B using C.
  2-transfer disk 2 form A to C.
  3-transfer disk disk 1 from B to C using A

3-assume there are 3 disks in tower A :
  1-transfer 2 disks from A to B using tower C.
  2-transfer disk 3 from A to C.
  3-transfer the 2 disks from B to C using tower A.

i have 3 cases so i can get the formula to solve this problem.
*/

#include<iostream>
using namespace std;
void TOH(int n,int A,int B,int C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B); 
        cout<<"("<<A<<","<<C<<")"<<endl;
        TOH(n-1,B,A,C);
    }
}
int main()
{
    TOH(3,1,2,3); //transfer 3 disks from A to C using B.
}
//Time Complexity : O(2^n).
//Space Complexity : O(n).

