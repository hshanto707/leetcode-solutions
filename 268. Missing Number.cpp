// Problem URL: https://leetcode.com/problems/missing-number/

class Solution {
public:
  int missingNumber(vector<int>& nums) {
    int ans = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
      if (ans == nums[i]) ans++;
      else break;
    }

    return ans;
  }
};