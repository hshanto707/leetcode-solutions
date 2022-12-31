// Problem URL: https://leetcode.com/problems/house-robber

class Solution {
public:
  int rob(vector<int>& nums) {
    vector <int> v(105);
    int n = nums.size();

    if (n == 0) return 0;        
    v[0] = nums[0];        

    if (n == 1) return v[0];        		
    v[1] = max(v[0], nums[1]);        

    for(int i = 2; i < n; i++)
      v[i] = max(v[i - 1], v[i - 2] + nums[i]);

    return v[n - 1];
  }
};