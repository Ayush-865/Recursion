/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.
*/

/*
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the
frequency of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
*/

#include <iostream>
#include <vector>
using namespace std;

void combination(int i, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    if (i == arr.size())
    {
        if (target == 0)
            ans.push_back(ds);
        return;
    }
    // pick up the element
    if (arr[i] <= target)
    {
        ds.push_back(arr[i]);
        combination(i + 1, target - arr[i], arr, ans, ds);
        ds.pop_back();
    }

    combination(i + 1, target, arr, ans, ds);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;
    combination(0, target, candidates, ans, ds);
    return ans;
}

int main()
{
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> ans = combinationSum(candidates, target);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}