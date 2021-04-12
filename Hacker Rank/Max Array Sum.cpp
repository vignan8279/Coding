int maxSubsetSum(vector<int> arr) {
    int n = arr.size();
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return max(arr[0], max(0, arr[1]));
    }
    vector<int> dp(n, 0);
    dp[0] = arr[0];
    dp[1] = max(dp[0], arr[1]);
    for(int i = 2; i<n; i++){
        dp[i] = max(dp[i-1], max(arr[i], max(dp[i-2]+arr[i], dp[i-2])));
    }
    return dp[n-1];
}