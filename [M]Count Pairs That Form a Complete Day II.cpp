class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        
        long long pairs=0;
        int size=hours.size();
        
        vector<long long > count(24,0);
        
        for (auto i:hours) {
            count[i%24]++;
        }
        
        
        pairs=pairs+(count[0]*(count[0]-1))/2;

        pairs=pairs+(count[12]*(count[12]-1))/2;

        for (int i=1;i<12;++i) {
            pairs= pairs+( count[i] * count[24 - i]);
        }
        
        
        return pairs;
    }
};
