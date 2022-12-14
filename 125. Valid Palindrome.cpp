// Problem URL: https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        vector <char> str1;
        vector <char> str2;
        
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9') {
                str1.push_back(s[i]);
                str2.push_back(s[i]);
            }
        }
        
        reverse(str2.begin(), str2.end());

        return (str1 == str2);
    }
};