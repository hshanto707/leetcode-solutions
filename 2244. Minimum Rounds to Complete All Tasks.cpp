// Problem URL: https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks

class Solution {
public:
  int minimumRounds(vector<int>& tasks) {
    unordered_map <int, int> cnt;
    int ans = 0;

    for (auto task: tasks) cnt[task]++;
    
    for (auto [task, count] : cnt) {
      if (count == 1) return -1;
      if (count % 3 == 0) ans += count / 3;
      else ans += (count / 3) + 1;
    }

    return ans;
  }
};