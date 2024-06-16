class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        
        int count=0;
        int size=hours.size();
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if((i!=j)&&(hours[i]+hours[j])%24==0)
                    count++;
            }
        }
        
        return count/2;
    }
};
