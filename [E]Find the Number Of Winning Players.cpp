class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {

        //int count=0;
        //vector<int> val;
        //int temp_a=0,temp_b=0,old_temp=0;

        // for(int i=0;i<pick.size()-1;i++){
        //     //count=0;
        //     if(pick[0][0]==0){
        //         val.push_back(1);
        //         continue;
        //     }
        //     // else{
        //     //     val.push_back(0);
        //     // }
        //     if(pick[i][0]==pick[i+1][0]){
        //         if(pick[i][1]==pick[i+1][1]){
        //             count++;
        //             continue;
        //         }
        //         //val.push_back(count);
        //     }
        //     if(count>i-1){
        //         val.push_back(count);
        //         count=0;
        //         //count=0;
        //         continue;
        //     }
        //     else{
        //         val.push_back(0);
        //         count=0;
        //         continue;
        //     }
            

        // }

        // for(auto i:val){
        //     cout<<i<<" ";
        // }
        
        vector<int> countc(n,0);
        for(int i=0;i<pick.size();++i){
            //if()
            int p=pick[i][0];
            int c=pick[i][1];
            // if(p==0){
            //     countc[0]=1;
            //     continue;
            // }
            int count=0;
            for(int j=0;j<pick.size();++j){
                if(p==pick[j][0] && c==pick[j][1]){
                    count++;
                }
            }
            if(count>p){
                countc[p]++;
            }
        }

        for(auto i:countc){
            cout<<i<<" ";
        }

        int win_count=0;
        for (int i = 0; i < n; ++i) {
            if (countc[i] > 0) {
                win_count++;
            }
        }
        return win_count;
    }
};
