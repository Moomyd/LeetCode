/*
��Ŀ����һ��ľ�壬����Ϊ n �� ��λ ��һЩ������ľ�����ƶ���ÿֻ���϶��� ÿ��һ����λ ���ٶ��ƶ������У�һ���������� �� �ƶ������������� �� �ƶ���

����ֻ�� ��ͬ �����ƶ���������ĳ��������ʱ�����ǻ�ͬʱ�ı��ƶ����򲢼����ƶ���������ķ��򲻻Ứ���κζ���ʱ�䡣

����������ĳһʱ�� t ����ľ���һ��ʱ����������ľ���ϵ�����

����һ������ n �������������� left �Լ� right ����������ֱ��ʶ������������ƶ��������� t = 0 ʱ��λ�á����㷵�����һֻ���ϴ�ľ���ϵ�������ʱ�̡�
*/
class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());

        int lMin = 0,rMax = 0;
        if(left.size()>0)
            lMin = left[left.size()-1];
        if(right.size()>0)
            rMax = n - right[0];
        int ans = lMin > rMax ? lMin : rMax;
        return ans;
    }
};
