/*
��Ŀ��Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).
The replacement must be in-place, do not allocate extra memory.
Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.
���⣺
��1����������Ҫ�鵹����k��Ԫ�أ�
��ӵ�����һ��Ԫ�ص�������k+1��Ԫ�ؽ���˳����ң�
���ҵ�������һ��Ԫ�ص�ֵ���ڵ�����k��Ԫ�ص�ֵ��
����н��������ڽ������i+1����֮���Ԫ��Ҫ����������ʹ�����
��2��������Ԫ�ص�ֵ���ȵ�����k��ֵС������ȣ���
������k��Ԫ�ص�������һ��Ԫ���γ�һ�����ϸ�ݼ����У�
��k--��������1����
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
