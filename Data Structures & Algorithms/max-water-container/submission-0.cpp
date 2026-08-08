class Solution {
public:
    int maxArea(vector<int>& heights) {
        int size = (int)heights.size();
        int left = 0;
        int right = size - 1;

        int max_vol = 0;

        while(left < right) {
            int volume = min(heights[left], heights[right]) * (right - left);
            if(volume > max_vol) max_vol = volume;
            if(heights[left] <= heights[right]) left++;
            else right--;
        }

        return max_vol;
    }
};
