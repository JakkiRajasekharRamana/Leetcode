class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long a,b;
        
        a=0;
        b=sqrt(c);
        while(a<=b)
        if(a*a +b*b==c){
            return true;
        }
        else if(a*a+b*b<c){
            a++;
        }
        else if(a*a+b*b>c){
            b--;
        }
        return false;
    }
};
