#include <bits/stdc++.h>

using namespace std;

void InsertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int x = A[i];
        int j = i;
        while ((j - 1 >= 0) && (x < A[j - 1])) {
            A[j] = A[j - 1];
            j--;
        }
        A[j] = x;
    }
}

int main() {
    int arr[5] = {8, 5, 7, 5, 2};
    InsertionSort(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
}
//Time Complexity :
//Best Case : O(n) if it already sorted.
//Worst Case :O(n^2) if it sorted in decreasing order.
//--------------------
//it`s stable(by nature) and adaptive sorting algorithm.
