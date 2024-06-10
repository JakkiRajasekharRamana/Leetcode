class Solution {
public:
    int minimumChairs(string s) {

    int c = 0;
    int maxp= 0;
    
    for (auto i:s) {
        if (i=='E') {
            c++;
        } 
        else if (i=='L') {
            c--;
        }
        maxp= max(maxp,c);
    }
    
    return maxp;
    }
};
