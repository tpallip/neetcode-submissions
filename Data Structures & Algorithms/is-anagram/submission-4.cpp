class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char, int> s_map;
       unordered_map<char, int> t_map;

       if(s.length() != t.length()) return false;

       for(char c : s) {
        s_map[c]++;
       }

       for(char c : t) {
        t_map[c]++;
       }

       for(auto& [val, cnt] : s_map) {
        if(t_map[val] != cnt) return false;
       }

       return true;
    }
};
