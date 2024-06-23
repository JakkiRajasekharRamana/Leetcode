class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int size=nums.size();
        
        
        int c=0;
        int index=0;
        
        while(index<=size-3){
            
            if(nums[index]==0){
                nums[index] = 1 - nums[index];
                nums[index + 1] = 1 - nums[index + 1];
                nums[index + 2] = 1 - nums[index + 2];
                c++;
            }
            index++;
        
    }
        for (int i = 0; i < size; ++i) {
            if (nums[i] == 0) {
                return -1;
            }
        }
        
        return c;
    }
};
