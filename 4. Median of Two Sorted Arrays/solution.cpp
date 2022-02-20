#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();

        double n12 = (double)n1 + (double)n2;
        double s1 = 0, s2 = 0;

        for (int i = 0; i < n1; i++)
        {
            s1 += (double)nums1[i];
        }

        for (int i = 0; i < n1; i++)
        {
            s2 += (double)nums2[i];
        }
        
        return s1/n12 + s2/n12;
    }
};


int main ()
{
    Solution solution;
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    
    cout << solution.findMedianSortedArrays(nums1, nums2) << endl;
}