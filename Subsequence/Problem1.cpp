/*
Print All Subsequence of the given array Recursively.
Time Complexity: O(2^n)*O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &ds) {
    for (int i = 0; i < ds.size(); i++) {
        cout << ds[i] << " ";
    }
    cout << endl;
}

void recursion(int i, vector<int> &ds, int arr[], int n) {
    if (i >= n) {
        print(ds);
        return;
    }
    ds.push_back(arr[i]);
    recursion(i + 1, ds, arr, n);
    ds.pop_back();
    recursion(i + 1, ds, arr, n);
}

int main() {
    int n=3;
    int arr[]={3,2,1};
    vector<int> ds;
    recursion(0, ds, arr, n);
    return 0;
}
