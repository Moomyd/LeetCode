/*
ÌâÄ¿£ºGiven a string,
find the first non-repeating character in it and return it¡¯s index.
 If it doesn¡¯t exist, return -1.
*/
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>count(26);
        for(int i=0;i<(int)s.size();i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<(int)s.size();i++){
            if(count[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};
