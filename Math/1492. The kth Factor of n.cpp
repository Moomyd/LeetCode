/*
n�ĵ�k������
*/
class Solution {
public:
    int kthFactor(int n, int k) {
        int N=1000;
        int a[N];
        int i,j=0;
        for(i=1;i<=n;i++){
            if(n%i==0){
                a[j++]=i;
            }
        }
        if(k>j){
            return -1;
        }
        else{
            return a[k-1];
        }
    }
};
