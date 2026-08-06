class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> result;
       vector<string> tmp;

       if(strs.size() < 2){
        result.push_back(strs);
        return result;
       }
       
       unordered_map<string, vector<string>> groups;
       
       for(string s : strs) {
        string original = s;
        sort(s.begin(), s.end());
        groups[s].push_back(original);
       }

       for(auto& [sorted, svec] : groups){
        result.push_back(svec);
       }

       return result;
    }
};
