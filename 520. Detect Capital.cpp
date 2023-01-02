// Problem URL: https://leetcode.com/problems/detect-capital

class Solution {
public:
  bool detectCapitalUse(string word) {
    int size = word.length(), capCnt = 0, lwrCnt = 0;

    for (int i = 0; i < size; i++) {
      if (islower(word[i])) lwrCnt++;
      else capCnt++;
    }

    if (capCnt == size || lwrCnt == size || (isupper(word[0]) && lwrCnt == size - 1)) return true;
    else return false;
  }
};