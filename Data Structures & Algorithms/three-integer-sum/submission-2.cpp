class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());
        int n = (int)nums.size();

        for(int i = 0; i < n; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int left = i+1;
            int right = n-1;
            int target = -nums[i];
            
            while(left < right) {
                int sum = nums[left] + nums[right];
                
                if(sum == target) {
                    vector<int> triplet;
                    triplet.push_back(nums[i]);
                    triplet.push_back(nums[left]);
                    triplet.push_back(nums[right]);
                    result.push_back(triplet);
                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left-1]) left++;
                    while (left < right && nums[right] == nums[right+1]) right--;
                }
                else if(sum < target) left++;
                else right--;
            }
        }
        return result;
    }
};
