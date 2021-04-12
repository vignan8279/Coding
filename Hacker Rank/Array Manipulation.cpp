long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> res(n+1, 0);
    long ans = INT_MIN;
    for(auto i : queries){
        res[i[0]]+=i[2];
        if(i[1]<n) res[i[1]+1]-=i[2];
    }
    long curr = 0;
    for(int i = 1; i<=n; i++){
        curr+=res[i];
        ans = max(ans, curr);
    }
    return ans;

}