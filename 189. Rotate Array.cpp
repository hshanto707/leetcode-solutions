// Problem URL: https://leetcode.com/problems/palindrome-number

class Solution {
public:
  void rotate(vector<int>& nums, int k) {
    while(k--) {
      int num = nums.back();
      nums.pop_back();
      nums.insert(nums.begin(), num);
    }
  }
};