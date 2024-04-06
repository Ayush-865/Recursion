/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
*/

#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int> &ds, int visited[], vector<vector<int>> &ans, vector<int> &arr)
{
    if (ds.size() == arr.size())
    {
        ans.push_back(ds);
        return;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (visited[i] == 1)
            continue;
        visited[i] = 1;
        ds.push_back(arr[i]);
        permute(ds, visited, ans, arr);
        visited[i] = 0;
        ds.pop_back();
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> ds;
    int visited[nums.size()];
    for (int i = 0; i < nums.size(); i++)
        visited[i] = 0;
    permute(ds, visited, ans, nums);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> ans = permute(nums);
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