class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int res = root->val;
        while(!q.empty()){
            int len = q.size();  //如果用i==q.size()，则会出错，因为q.size()会变化。
            for(int i = len; i > 0; i--){
                auto t = q.front();
                q.pop();
                if(i == len){
                    res = t->val;
                }
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return res;
    }
};