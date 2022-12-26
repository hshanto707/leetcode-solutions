// Problem URL: https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
  int longestConsecutive(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    if (nums.size() == 1) return 1;

    int ans = 1, cnt = 1;

    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++) {
      if (nums[i-1] == nums[i]) continue;
      if (nums[i-1] + 1 == nums[i]) {
        cnt++;
        if (cnt > ans) ans = cnt;
      }
      else cnt = 1;
    }

    return ans;
  }
};