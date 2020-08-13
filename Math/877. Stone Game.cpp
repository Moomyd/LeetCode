/*
题目：亚历克斯和李用几堆石子在做游戏。偶数堆石子排成一行，每堆都有正整数颗石子 piles[i] 。

游戏以谁手中的石子最多来决出胜负。石子的总数是奇数，所以没有平局。

亚历克斯和李轮流进行，亚历克斯先开始。 每回合，玩家从行的开始或结束处取走整堆石头。 这种情况一直持续到没有更多的石子堆为止，此时手中石子最多的玩家获胜。

假设亚历克斯和李都发挥出最佳水平，当亚历克斯赢得比赛时返回 true ，当李赢得比赛时返回 false 。
*/
class Solution {
public:
    bool stoneGame(vector<int>& piles) {
         int n = piles.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for(int i = 0; i < n; i++) {
            dp[i][i] = piles[i]; //初始化只有i一个石头堆的情形
        }
        for(int dis = 1; dis < n; dis++) {//依次计算相邻2个石头堆到n个石头堆的情形
            for(int i = 0; i < n - dis; i++) {
                dp[i][i+dis] = max(piles[i]-dp[i+1][i+dis], piles[i+dis]-dp[i][i+dis-1]);
            }
        }
        return dp[0][n-1] > 0;
    }
};
