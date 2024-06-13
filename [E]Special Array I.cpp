class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        
        int size=nums.size();
        bool f=true;
        for(int i=0;i<size-1;i++){
            if(size==1){
                return true;
            }
            int x=nums[i]%2;
            int y=nums[i+1]%2;

            if(x==y){
                f=false;
                break;
            }
        }
        
        return f;
    }
};
