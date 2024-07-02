class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        for(auto &i:arr){
            i=i%2;
        }

        if(arr.size()<3)
            return false;
        for(int i=0;i<=arr.size()-3;i++){
            if(1==arr[i] && 1==arr[i+1] && 1==arr[i+2])
                return true;
        }

        return false;
    }
};