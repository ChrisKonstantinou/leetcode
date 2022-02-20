#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    vector<int> buildArray(vector<int>& nums)
    {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) ans.push_back(nums[nums[i]]);
        return ans;
    }
};


int main ()
{
    Solution solution;
    vector<int> nums = {0, 2, 1, 5, 3, 4};

    for (int x : solution.buildArray(nums)) cout << x << " ";
}