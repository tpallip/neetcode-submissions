class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size() == 2) return {0, 1};
        unordered_map<int, int> in_map;
        vector<int> result;

        for(int i=0; i < (int)nums.size(); i++){
            int need = target - nums[i];
            if(in_map.count(need)) return {in_map[need], i};
            in_map[nums[i]] = i;
        }
        
        return {};
    }
};
