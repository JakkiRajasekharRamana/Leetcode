class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {

        int size=nums.size();
        vector<bool> v;
        int start,end;
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]%2;
        }
        for(auto i: queries){
            start=i[0];
            end=i[1];
            int size = nums.size();
        
            bool f=true;
            for(int i=start;i<end;i++){
                if(size==1){
                    v.push_back(true);
                }

                if(nums[i]==nums[i+1]){
                    f=false;
                    break;
                }
            }
        
            v.push_back(f);
    }
        
        return v;
    }
};

