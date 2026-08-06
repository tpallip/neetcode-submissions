class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> numSet(nums.begin(), nums.end());
       int best = 0;
       for(int x : numSet){
        if(numSet.count(x - 1)) continue;

        int longest = 1;
        int current = x;
        while(numSet.count(current + 1)) {
            longest++;
            current++;
        }

        best = max(best, longest);
       }

        return best;;
    }
};
