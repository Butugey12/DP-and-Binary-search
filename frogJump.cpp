class Solution {
    
  public:
  // memoization 
    int f(int indx , vector<int>&height , vector<int>&dp) {
        if(indx==0) return 0;
        int left =0;
        int right = INT_MAX;
        if(dp[indx]!=-1) {
            return dp[indx];
        }
        left = f(indx-1 , height ,dp) + abs(height[indx]-height[indx-1]);
        if(indx>1) {
            right = f(indx-2, height , dp) + abs(height[indx]-height[indx-2]);
        }
        return dp[indx] = min(left, right);
    }
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        // vector<int> (n+1 , -1)
        // return f(n-1 ,height , dp);
        
        // bottom-up tabulation solutin
        vector<int>dp(n, 0);
        dp[0]=0;
        for(int i=1;i<n;i++) {
            int fs = abs(height[i]-height[i-1]) + dp[i-1];
            int ss = INT_MAX;
            if(i>1) {
                ss = abs(height[i]-height[i-2]) +dp[i-2];
            }
            dp[i] = min(fs, ss);
        }
        return dp[n-1];
    }
};
