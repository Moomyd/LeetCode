/*
ÌâÄ¿£ºGiven an array A, we can perform a pancake flip: We choose some positive integer k<= A.length,
 then reverse the order of the first k elements of A. We want to perform zero or more pancake flips (doing them one after another in succession) to sort the array A.
Return the k-values corresponding to a sequence of pancake flips that sort A. Any valid answer that sorts the array within 10 * A.length flips will be judged as correct.
*/
class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> ret;
        for(int i = 0;i < A.size()-1;i++)
        {
            auto maxpos = max_element(A.begin(),A.end()-i);
            ret.push_back(maxpos-A.begin()+1);
            ret.push_back(A.size()-i);
            reverse(A.begin(),maxpos+1);
            reverse(A.begin(),A.end()-i);
        }
        return ret;
    }
};
