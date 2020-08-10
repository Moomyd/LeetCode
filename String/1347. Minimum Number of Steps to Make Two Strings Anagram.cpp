/*
ÌâÄ¿£ºGiven two equal-size strings s and t. In one step you can choose any character of t and replace it with another character.

Return the minimum number of steps to make t an anagram of s.

An Anagram of a string is a string that contains the same characters with a different (or the same) ordering.
*/
class Solution {
public:
    int minSteps(string s, string t) {
        int[] list = new int[26];

        for(int i=0; i<s.length(); i++){
            list[s.charAt(i)-'a']++;
            list[t.charAt(i)-'a']--;
        }

        int res =0;

        for(int i: list) res+=i>0?i:0;

        return res;
    }
};
