#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int>& nums)
    {
        vector<int> r_nums;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int sum = nums[i];
            for (int j = 0; j < i; j++) sum += nums[j];
            r_nums.push_back(sum);
        }
        return r_nums;
    }
};

int main ()
{
    Solution solution;
    vector<int> nums = {3,1,2,10,1};
    for (int x : solution.runningSum(nums)) cout << x << " ";
}