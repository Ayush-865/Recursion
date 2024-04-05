/*
Print Number of Subsequence whose sum of elements is required using Recursion.
Time Complexity: O(2^n)*O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

int recursion(int i, int s, int sum, int arr[], int n) {
    if (i == n) {
        if (s==sum)
            return 1;
        return false;
    }
    s+=arr[i];
    int l=recursion(i + 1, s, sum, arr, n);
    s-=arr[i];
    int r= recursion(i + 1, s, sum, arr, n);
    return l+r;
}

int main() {
    int n=3;
    int sum=2;
    int arr[]={1,2,1};
    cout<<recursion(0, 0 , sum, arr, n)<<"\n";
    return 0;
}
