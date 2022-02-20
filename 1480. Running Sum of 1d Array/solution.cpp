#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int>& nums)
    {
        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; i++)
        {   
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};

int main ()
{
    Solution solution;
    vector<int> nums = {3,1,2,10,1};
    for (int x : solution.runningSum(nums)) cout << x << " ";
}