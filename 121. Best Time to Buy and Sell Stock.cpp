// Problem URL: https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
  int maxProfit(vector<int>& prices) {
    int bPrice = prices[0], sPrice, maxProfit = 0, currProfit = 0;

    for (int i = 1; i < prices.size(); i++) {
      if (bPrice > prices[i]) bPrice = prices[i];
      else {
        currProfit = prices[i] - bPrice;
        if (currProfit > maxProfit) maxProfit = currProfit;
      }
    }

    return maxProfit;
  }
};