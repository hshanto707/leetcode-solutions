// Problem URL: https://leetcode.com/problems/subarray-sum-equals-k

class Solution {
public:
  int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> mp;
    int sum = 0, cnt = 0;
    mp[sum] = 1;

    for (auto num: nums) {
      sum += num;
      int find = sum - k;

      if (mp.find(find) != mp.end()) {
        cnt += mp[find];
      }
      mp[sum]++;
    }

    return cnt;
  }
};