class Solution {
public:
    int countSeniors(vector<string>& d) {
        int count60=0;
        //vector<int> age;
        for(int i=0;i<d.size();i++){
                d[i]=d[i].substr(11,2);
                // if(count>10 && count<13){
                //     age.push_back(d[i]);
                //     break;
                // }
                // count++;
        }

        for(auto i:d){
            if(stoi(i)>60)
                count60++;
            //cout<<i<<" ";
        }

        return count60;
    }
};
