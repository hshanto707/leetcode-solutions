// Problem URL: https://leetcode.com/problems/two-sum

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    unordered_map<int, int> idxMap;

    for (int i = 0; i < nums.size(); i++) {
      if (idxMap.find(target - nums[i]) != idxMap.end()) {
        res.push_back(idxMap[target-nums[i]]);
        res.push_back(i);
        return res;
      }
      idxMap[nums[i]] = i;
    }

    return res;
  }
};