#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> ans(2 * n);

        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }
        return ans;
    }

};


int main ()
{
    vector<int> nums = {1, 2, 3, 6, 1};
    Solution solution;
    for (int x : solution.getConcatenation(nums))
    {
        cout << x << endl;
    }
}