class Solution {
public:
    int minDifference(vector<int>& nums) { 

        int n=nums.size();

        if(n<=4)
            return 0;
        sort(nums.begin(), nums.end()); 

        int diff= nums.back() - nums[0];
        for(int i=0;i<4;i++){
            diff=min(diff,nums[n-(3-i)-1]-nums[i]);
        }

        return diff;
    }
};
