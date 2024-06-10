class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        
        vector<int> new_nums;
        for(int i = 0; i < nums.size(); i++){
            for(int j=i+1;j<nums.size();j++){
            //cout <<" "<<nums[i];
            if(nums[i]==nums[j]){
                new_nums.push_back(nums[i]);
            }
            }
        }
        int sol=0;
        for(int k=0;k<new_nums.size();k++){
            //cout<<new_nums[k]<<" ";
            sol=(sol^new_nums[k]);
        }

        return sol;
    }
};
