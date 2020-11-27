class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)
            return 1;
        if(n==1)
            return 10;
        if(n==2)
            return 91;
        int sum=9;
        int x=0;
        while(x<n-1){
            int m=9-x;
            if(m<=0)
                break;
            sum=sum*m;
            x++;
        }
        int r=sum+countNumbersWithUniqueDigits(n-1);
        return r;
    }
};