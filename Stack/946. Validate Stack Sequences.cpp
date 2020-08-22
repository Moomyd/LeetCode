/*
入栈出栈顺序
*/
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int len = pushed.size(), i=0, j=0;
        while(i<len&&j<len){
            st.push(pushed[i]);
            while(!st.empty()&&st.top()==popped[j]){
                j+=1;
                st.pop();
            }
            i+=1;
        }
        return j==len;
    }
};