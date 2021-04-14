long candies(int n, vector<int> arr) {
    vector<int> dp(n, 1);
    for(int i = 1; i<n; i++){
        if(arr[i]>arr[i-1]){
            dp[i] += dp[i-1];
        }
    }
    for(int i = n-2; i>=0; i--){
        if(arr[i] > arr[i+1] && dp[i] < dp[i+1]+1){
            dp[i] = dp[i+1]+1;
        }
    }
    long ans = 0;
    for(auto i : dp){
        ans+=i;
    }
    return ans;
}
