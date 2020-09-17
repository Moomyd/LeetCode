class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int count = 0;
        int addend = 0;

        for (int i = 2; i < A.size(); i++)
            if (A[i - 1] - A[i] == A[i - 2] - A[i - 1])
                count += ++addend;
            else 
                addend = 0;

        return count;
    }
};