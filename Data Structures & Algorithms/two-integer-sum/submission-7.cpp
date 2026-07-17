class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        if(nums.size() < 2) return {};
        
        vector<pair<int, int>> x;
        for(int i = 0; i < nums.size(); i++) x.push_back({nums[i], i});
        sort(x.begin(), x.end());
        
        int start_idx = 0;
        int end_idx = nums.size() - 1;

        while(start_idx < end_idx){
            int sum_it = x[start_idx].first + x[end_idx].first;
            if(sum_it == target) {
                int a = x[start_idx].second, b = x[end_idx].second;
                return {min(a,b), max(a,b)};
            }
            else if (sum_it < target){
                start_idx++;
            }
            else if (sum_it > target) {
                --end_idx;
            }
        }

        return {};

    }
};
