class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        vector<double> n;
        
        double small,big,avg;
            
       while(nums.size()>1){
            
            small=nums.front();
            big=nums.back();
            
            avg=(small+big)/2.0;
            
            
            nums.erase(nums.begin());
            nums.erase(nums.end() - 1);
            
            n.push_back(avg);
            
        }
        
        sort(n.begin(), n.end());

        return static_cast<double>(n[0]);
    }
};
