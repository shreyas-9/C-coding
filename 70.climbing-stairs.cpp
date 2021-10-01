/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {

        int dp[]={0};
        // int dp[n][n];
        // cout<<fun(n);
        
        return fun(n,dp);;
    }
    int fun(int x,int dp[]){
        if(x==1 || x==2){
            return x;
        }
        int m,n;
        if(dp[x-2]==0){
            m =fun(x-2,dp);
        }else{
            m=dp[x-2];
        }
        if(dp[x-1]==0){
            n=fun(x-1,dp);
        }else{
            n=dp[x-1];
        }
        return m+n;
    }
};
// @lc code=end

