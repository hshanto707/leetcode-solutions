// Problem URL: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons

class Solution {
public:
  int findMinArrowShots(vector<vector<int>>& points) {
    sort(points.begin(), points.end());

    int ans = 1, lastPoint = points[0][1];

    for(auto point : points) {
      if (point[0] > lastPoint) {
        ans++;
        lastPoint = point[1];
      } else lastPoint = min(lastPoint, point[1]);
    }

    return ans;
  }
};