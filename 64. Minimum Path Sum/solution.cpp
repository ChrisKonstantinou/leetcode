#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    int minPathSum(vector<vector<int>>& grid)
    {
        int rows = grid.size();
        int columns = grid[0].size();
        int goal = grid[rows - 1][columns - 1];
        
        for (int i = 0; i < rows - 1; i++)
        {
            for (int j = 0; j < columns - 1; j++)
            {
                
            }
        }

        //Valid moves
        // grid[i][j] - > grid[i][j + 1]
        // grid[i][j] - > grid[i + 1][j]



        return goal;
    }
};


int main ()
{
    Solution solution;
    vector<vector<int>> path = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << solution.minPathSum(path) << endl;
}