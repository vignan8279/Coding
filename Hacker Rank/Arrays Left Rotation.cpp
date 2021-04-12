vector<int> rotLeft(vector<int> a, int d) {
    int n = a.size();
    vector<int> ans(n);
    int val = 0;
    // sort(a.begin(), a.end());
    for(int i = n-d; i<n; i++){
        ans[i] = a[val];
        val++;
    }
    for(int i = 0; i<n-d; i++){
        ans[i] = a[val];
        val++;
    }
    return ans;
}