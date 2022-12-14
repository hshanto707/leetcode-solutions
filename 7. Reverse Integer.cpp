// Problem URL: https://leetcode.com/problems/reverse-integer

class Solution {
public:
  int reverse(int n) {
    long long res = 0;
    while(n) {
      res = res * 10 + n % 10;
      n /= 10;
    }
    return (res<INT_MIN || res>INT_MAX) ? 0 : res;
  }
};