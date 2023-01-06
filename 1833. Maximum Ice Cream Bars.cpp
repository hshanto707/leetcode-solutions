// Problem URL: https://leetcode.com/problems/twomaximum-ice-cream-bars

class Solution {
public:
  int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(), costs.end());
    int ans = 0;

    for (auto cost : costs) {
      if (cost <= coins) {
        cout << coins << ' ' << cost << endl;
        coins -= cost;
        ans++;
      }
    }

    return ans;
  }
};