# 1828. Queries on Number of Points Inside a Circle

You are given an array points where `points[i] = [xi, yi]` is the coordinates of the `ith` point on a `2D plane`. Multiple points can have the same coordinates.

You are also given an array `queries` where `queries[j] = [xj, yj, rj]` describes a circle centered at `(xj, yj)` with a radius of `rj`.

For each query `queries[j]`, compute the number of points inside the `jth` circle. Points on the border of the circle are considered inside.

Return an array answer, where `answer[j]` is the answer to the `jth` query.

## Example 1

![image](https://user-images.githubusercontent.com/53091475/154852332-74fcd2c6-597a-4b17-a1d8-34667b0a2877.png)

    Input: points = [[1,3],[3,3],[5,3],[2,2]], queries = [[2,3,1],[4,3,1],[1,1,2]]
    Output: [3,2,2]
    Explanation: The points and circles are shown above.
    queries[0] is the green circle, queries[1] is the red circle, and queries[2] is the blue circle.

## Example 2
![image](https://user-images.githubusercontent.com/53091475/154852413-c3d83f76-7235-41ba-8d56-1943a852d940.png)
