class Solution {
public:
    int hammingWeight(uint32_t n) {
      int count = 0;
      while(n>0)
      {
          if(n%2 == 1)
          {
              count++;
          }
          n = n>>1 ;
      }
        return count;
    }
 
    vector<int> countBits(int num) {        
         vector<int> result(num+1, 0);
         for(int i = 1;i< result.size();i++)
         {
             result[i] =hammingWeight(i);
         }
        return result;
    }
};