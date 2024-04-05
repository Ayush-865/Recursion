/*
Print Only 1 Subsequence whose sum of elements is required using Recursion.
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

bool recursion(int i, vector<int> &ds, int s, int sum, int arr[], int n) {
    if (i == n) {
        if (s==sum)
        {
            print(ds);
            return true;
        }
        return false;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    if(recursion(i + 1, ds, s, sum, arr, n)==true)
        return true;
    ds.pop_back();
    s-=arr[i];
    if(recursion(i + 1, ds, s, sum, arr, n)==true)
        return true;

    return false;
}

int main() {
    int n=3;
    int sum=2;
    int arr[]={1,2,1};
    vector<int> ds;
    recursion(0, ds, 0 , sum, arr, n);
    return 0;
}
