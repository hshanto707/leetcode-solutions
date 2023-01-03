// Problem URL: https://leetcode.com/problems/delete-columns-to-make-sorted

class Solution {
public:
  int minDeletionSize(vector<string>& strs) {
    int n = strs.size();
    int m = strs[0].size();
    int cnt = 0, i = 0, j = 0;
    
    while (j < m) {
      for (int k = 1; k < n; k++) {
        if (strs[k - 1][j] > strs[k][j]) {
          cnt++;
          break;
        }
      }
      j++;
    }
    
    return cnt;
  }
};