class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //if(strs.size() < 2)
        vector<string> input = strs;
        unordered_map<string, vector<string>> groups;

        for(int i = 0; i < strs.size(); i++){
            sort(input[i].begin(), input[i].end());
            groups[input[i]].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for (auto& [key, val] : groups) {
            result.push_back(val);
        }

        return result;
    }
};
