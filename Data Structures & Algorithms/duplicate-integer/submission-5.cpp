class Solution {
public:
    //vector<int> x = {4, 3, 1, 4}
    void sortInPlace(vector<int>& v){
        

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

    }


    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() < 2){
                return false;
        }
        
        sortInPlace(nums);
        
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1]) return true;
            else continue;
        }

        return false;
    }
};