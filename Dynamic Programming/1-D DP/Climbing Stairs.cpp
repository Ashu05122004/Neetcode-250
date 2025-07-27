
class Solution {
public:
    vector<int> dp;
    int solve(int n){

        if(n==0 || n==1 || n==2){
            return n;
        }

        if(dp[n] != -1){
            return dp[n];
        }

        int one_step = solve(n-1);
        int two_step = solve(n-2);

        return dp[n] = one_step + two_step;
      }

    int climbStairs(int n) {
        dp.resize(n+1 , -1);
        return solve(n);
    }
};
