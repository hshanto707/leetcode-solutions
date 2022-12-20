// Problem URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    int cnt = 1;
    int curr=nums[0];
    int n = sizeof(nums) / sizeof(nums[0]);

    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] == curr) nums[i] = 999;
      else {
        curr = nums[i];
        cnt++;
      }
    }

    sort(nums.begin(), nums.end());

    return cnt;
  }
};