#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Solution
{
public:
    bool isInside(vector<int>& point, vector<int>& circle)
    {
        // point[0] = x coord, point[1] = y coord
        // circle[0] = x center coord, circle[1] = y circle coord, circle[2] = radius
        
        int distance_square = ((circle[0] - point[0]) * (circle[0] - point[0])) +
                       ((circle[1] - point[1]) * (circle[1] - point[1]));

        return sqrt(distance_square) <= (double)circle[2];
    }

    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries)
    {
        vector<int> result;
        int answer;
        int q_size = queries.size();
        int p_size = points.size();
        for (int i = 0; i < q_size; i++)
        {
            answer = 0;
            for (int j = 0; j < p_size; j++) if (isInside(points[j], queries[i])) answer++;
            result.push_back(answer);
        }

        return result;
    }
};

int main ()
{
    Solution solution;
    vector<vector<int>> points = {{1, 3}, {3, 3}, {5, 3}, {2, 2}};
    vector<vector<int>> queries = {{2, 3, 1}, {4, 3, 1}, {1, 1, 2}};

    for (int x : solution.countPoints(points, queries)) cout << x << " ";
}