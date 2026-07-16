class Solution {
public:
    //vector<int> x = {4, 3, 1, 4}
    vector<int> sort(vector<int>& v){
        if(v.size() < 2){
                return v;
        }

        int i = 0;
        bool flag = false;
        int v_tmp = 0;

        while(i != (int)v.size() -1){
            if(flag == true){
                i = 0;
                flag = false;
            }

            if(v[i] <= v[i+1]){
                i+=1;
            }
            else {
                v_tmp = v[i];
                v[i] = v[i+1];
                v[i+1] = v_tmp;
                flag = true;
            }
        }

        return v;
    }


    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() < 2){
                return false;
        }
        
        vector<int> nums_sorted;
        nums_sorted = sort(nums);
        
        for(int i = 0; i < nums_sorted.size() - 1; i++){
            if(nums_sorted[i] == nums_sorted[i+1]) return true;
            else continue;
        }

        return false;
    }
};