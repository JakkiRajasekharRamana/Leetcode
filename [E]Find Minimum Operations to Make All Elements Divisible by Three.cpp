class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]%3;
        }
        
        int count=0;
        
        for(auto i:nums){
            if(i==1|| i==2)
                count++;
        }
        
        return count;
    }
};
