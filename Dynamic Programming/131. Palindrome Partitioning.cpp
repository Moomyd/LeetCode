class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        finder(s,0,path,res);
        return res;
    }
    void finder(string s,int p,vector<string> &path,vector<vector<string>>&res){
        if(p==s.size()){
            res.push_back(path);
            return ;
        }
        for(int i=p;i<s.size();i++){
            if(isPalindrome(s.substr(p,i-p+1))){
                path.push_back(s.substr(p,i-p+1));
                finder(s,i+1,path,res);
                path.pop_back();
            }
        }
    }
    bool isPalindrome(string s){
        int f=0;
        int end=s.size()-1;
        while(f<end){
            if(s[f++]!=s[end--])
                return false;
        }
        return true;
    }
};