class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int dp[n] ;
        dp[0] = nums[0];
        int maxxy = nums[0];
        for(int i=1;i<n;i++){
            if(dp[i-1]<=0){
                dp[i] = nums[i] + 0;
            }
            else if(dp[i-1]>0){
                dp[i] = nums[i] + dp[i-1];
            }
            maxxy = max(maxxy, dp[i]);
        }
        return maxxy;
    }
};