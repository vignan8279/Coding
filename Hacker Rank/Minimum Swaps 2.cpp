int minimumSwaps(vector<int> arr) {
    int ans = 0;
    int n = arr.size();
    vector<int> index(n+1);
    for(int j = 0; j<n; j++){
        index[arr[j]] = j+1;
    }
    for(int i = 0; i<n; i++){
        if(arr[i]!=i+1){
            ans++;
            int temp = arr[i];
            swap(arr[i], arr[index[i+1]-1]);
            index[temp] = index[i+1];
        }
    }
    return ans;

}