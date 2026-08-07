class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int num_size = (int)numbers.size();
        int i = 0;
        int j = num_size -1;

        while(i < j){
            int sum = numbers[i] + numbers[j];
            if(sum == target) return {i+1, j+1};
            else if(sum < target) i++;
            else j--;
        }

        return {};
    }
};
