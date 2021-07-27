#include <bits/stdc++.h>
using namespace std;

void Merge(int a[], int low, int hight, int mid) {

    int x = low, y = mid + 1, k = low;
    int arr[200];
    while (x <= mid && y <= hight) {
        if (a[x] > a[y])
            arr[k++] = a[y++];
        else
            arr[k++] = a[x++];
    }
    while (y <= hight)arr[k++] = a[y++];
    while (x <= mid)arr[k++] = a[x++];

    for (int i = low; i <= hight; i++)
        a[i] = arr[i];
}

void MergeSort(int b[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;
        MergeSort(b, l, mid);
        MergeSort(b, mid + 1, h);
        Merge(b, l, h, mid);
    }
}
int main() {
    int A[11] = {8, 2, 9, 6, 5, 3, 7, 4, 0, 1, -1};
    MergeSort(A, 0, 10);
    for (int i = 0; i < 11; i++)
        cout << A[i] << " ";
    cout << endl;
}

//Time complexity -> O(nlog(n)).
//Space complexity -> O(n).
