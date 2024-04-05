/*
Given a list(Arr) of N integers, print sums of all subsets in it. Output should be printed in increasing order of sums
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subsetSum1(int i, int sum, vector<int> &ds, vector<int> &arr, int n, vector<int> &sums)
{
    if (i >= n)
    {
        sums.push_back(sum);
        return;
    }
    ds.push_back(arr[i]);
    sum += arr[i];
    subsetSum1(i + 1, sum, ds, arr, n, sums);
    sum -= arr[i];
    ds.pop_back();
    subsetSum1(i + 1, sum, ds, arr, n, sums);
}

int main()
{
    vector<int> arr = {2, 3, 4};
    vector<int> ds;
    int n = 3;
    vector<int> sums;
    subsetSum1(0, 0, ds, arr, n, sums);

    // Sort the sums in increasing order
    sort(sums.begin(), sums.end());

    // Print the sums
    for (int sum : sums)
    {
        cout << sum << " ";
    }
    return 0;
}
