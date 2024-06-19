class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int count=0;
        if(nums.size()==1){
            return count;
        }
        int i =0;
        sort(nums.begin(), nums.end());
        while(i < nums.size()-1){
            if(nums[i]==nums[i+1]){
                nums[i+1]++;
                count++;
                continue;
            }
            else if(nums[i] > nums[i+1]){
                count += nums[i]-nums[i+1] + 1;
                nums[i+1] = nums[i] + 1;
            }
            i++;
        }


        return count;


        
    }
};
