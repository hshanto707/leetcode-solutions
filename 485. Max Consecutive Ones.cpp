// Problem URL: https://leetcode.com/problems/max-consecutive-ones

class Solution {
public:
  int findMaxConsecutiveOnes(vector<int>& nums) {
    int cnt = 0, max = 0;

    for (auto num: nums) {
      if (num) {
        cnt++;
        if (cnt > max) max = cnt;
      } else cnt = 0;
    }

    return max;
  }
};