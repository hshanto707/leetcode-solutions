// Problem URL: https://leetcode.com/problems/word-pattern

class Solution {
public:
  bool wordPattern(string pattern, string s) {
    unordered_map<char,string> mp;
    unordered_map<string,bool> isVisited;
    vector<string> v;

    stringstream st(s);

    string word;
    int cnt = 0;

    while(st>>word){
      cnt++;
      v.push_back(word);
    }

    if(pattern.size() != cnt) return false;
    
    for (int i = 0; i < pattern.size(); i++) {
      char ch = pattern[i];

      if (mp[ch] == "" && isVisited[v[i]] == true) return false;
      else if (mp[ch] == "") {
        mp[ch] = v[i];
        isVisited[v[i]] = true;
      } else
        if (mp[ch] != v[i]) return false;
    }

    return true;
  }
};