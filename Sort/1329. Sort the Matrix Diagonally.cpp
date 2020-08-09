class Solution {
public:
   void sortOneDia(vector<vector<int>>& mat, int x, int y){
        vector<int> ascorder;
        int xx{x}, yy{y}, i;
        while(xx < mat.size() && yy < mat[xx].size()){
            ascorder.push_back(mat[xx][yy]);
            xx++, yy++;
        }
        sort(ascorder.begin(), ascorder.end());
        xx = x, yy = y, i = 0;
        while(xx < mat.size() && yy < mat[xx].size()){
            mat[xx][yy] = ascorder[i];
            xx++, yy++, i++;
        }
        return;
    }

    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for(int x = 0; x < mat.size(); x++)
            sortOneDia(mat, x, 0);
        for(int y = 1; y < mat[0].size(); y++)
            sortOneDia(mat, 0, y);
        return mat;
    }
};
