/*
ÌâÄ¿£ºBalanced strings are those who have equal quantity of 'L' and 'R' characters.

Given a balanced string s split it in the maximum amount of balanced strings.

Return the maximum amount of splitted balanced strings.
*/
class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0,r=0,ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L') l++;
            else r++;
            if(l==r) ans++,l=0,r=0;
        }
        return ans;
    }
};
