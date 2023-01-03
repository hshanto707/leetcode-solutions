// Problem URL: https://leetcode.com/problems/maximum-subarray

class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    int sum = 0;
    int ans = INT_MIN;
    
    for (auto num: nums) {
      sum += num;
      ans = max(sum, ans);
      
      if (sum < 0) sum = 0;
    }
    
    return ans;
  }
};