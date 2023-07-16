// Problem URL: https://leetcode.com/problems/sum-of-squares-of-special-elements/

class Solution {
public:
  int sumOfSquares(vector<int>& nums) {
    int res = 0;
    for (int i = 0; i < nums.size(); i++) 
      if (nums.size() % (i + 1) == 0) res += nums[i] * nums[i];

    return res;
  }
};