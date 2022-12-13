// Problem URL: https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {
        signed long long num = x;
        signed long long res = 0;
        while(num) {
            res = res * 10 + num % 10;
            num /= 10;
        }

        if (x == res && x >= 0) return true;
        else return false;
    }
};