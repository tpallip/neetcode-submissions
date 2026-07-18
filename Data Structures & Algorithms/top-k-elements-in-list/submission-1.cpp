class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for(int x : nums) {
            freq[x]++;
        }

        vector<pair<int, int>> asc_freq;

        for (auto& [val, cnt] : freq) {
            asc_freq.push_back({cnt, val});
        }

        sort(asc_freq.begin(), asc_freq.end());

        vector<int> result;
        for(int i = asc_freq.size() - 1; i >= (int)asc_freq.size() - k ; --i) {
            result.push_back(asc_freq[i].second);
        }

        return result;
    }
};
