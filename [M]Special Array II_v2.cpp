class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {

        vector<int> presum(nums.size());
        int cnt = 0;
        presum[0] = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]%2 == nums[i]%2){
                cnt++;
            }
            presum[i] = cnt;
        }
        vector <bool> fin;
        for(auto q: queries){
            if(presum[q[0]] == presum[q[1]]){
                fin.push_back(true);
            }
            else{
                fin.push_back(false);
            }
        }
        /*
        for(auto i : presum){
            cout << i<< " ";
        }*/
        return fin;
    }
};
