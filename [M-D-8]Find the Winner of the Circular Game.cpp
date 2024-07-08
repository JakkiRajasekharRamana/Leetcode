class Solution {
public:
    int findTheWinner(int n, int k) {
        
        int count=n;
            
        vector<int> vec;
        for(int i=1;i<=n;i++)
            vec.push_back(i);
        
        int pop=0;
        while(69){
            pop=(pop+k-1)%vec.size();
            vec.erase(vec.begin() + pop);
            count--;
            if(vec.size()<=1)
                break;
        }

        int num = vec[0];

        return num;
    }
};
