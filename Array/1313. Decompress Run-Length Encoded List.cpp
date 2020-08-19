class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size() / 2; i ++) {
            auto freq = nums[2 * i], val = nums[2 * i + 1];
            vector<int> tmp(freq, val);
            std::copy(tmp.begin(), tmp.end(), back_inserter(res));
        }
        return res;
    }
};
