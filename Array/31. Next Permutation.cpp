/*
题目：Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).
The replacement must be in-place, do not allocate extra memory.
Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.
题意：
（1）比如现在要查倒数第k个元素，
则从倒数第一个元素到倒数第k+1个元素进行顺序查找，
若找到其中有一个元素的值大于倒数第k个元素的值，
则进行交换，并在交换后第i+1及其之后的元素要进行重排序，使其递增
（2）若后面元素的值都比倒数第k个值小（或相等），
则倒数第k个元素到倒数第一个元素形成一个非严格递减序列，
则k--，继续（1）；
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    if (nums.size()!=0)
    {
        int n=0,size=nums.size();
        for(int i=size-2;i>=0;i--)
        {
            int m=nums[i];
            for(int j=size-1;j>i;j--)
            {
                if (m<nums[j])
                {
                    nums[i]=nums[j];
                    nums[j]=m;
                    n=1;
                    break;
                }
            }
            if (n==1)
            {
                sort(nums.begin()+i+1,nums.end());
                break;
            }
        }
        if (n==0)
        {
            for(int i=0;i<size/2;i++)
            {
                int m=nums[i];
                nums[i]=nums[size-i-1];
                nums[size-i-1]=m;
            }
        }
    }

    }
};
