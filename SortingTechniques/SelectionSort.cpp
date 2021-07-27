#include <bits/stdc++.h>

using namespace std;

void SelectionSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int j, k = i;
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[k])
                k = j;
        }
        swap(A[k], A[i]);
    }
}

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    SelectionSort(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
}
//Time Complexity :
//Best Case : O(n^2) if it already sorted.
//Worst Case :O(n^2) if it sorted in decreasing order.
//--------------------
//it`s non-stable and non-adaptive sorting algorithm.
