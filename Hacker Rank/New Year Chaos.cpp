// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
    // int ans = 0;
    unordered_map<int, int> mp;
    bool possible = true;
    for(int i = 0; i<q.size(); i++){
        mp[q[i]] = i+1;
        if(q[i] - i -1 > 2){
            possible  = false;
            break;
        }
    }
    int ans = 0;
    if(possible){
        for(int i = 0; i<q.size(); i++){
            for(int j = q[i]-2; j<i; j++){
                if(q[j] > q[i]){
                    ans++;
                }
            }
        }
    }
    
    if(possible){
        cout << ans << endl;
    }
    else{
        cout << "Too chaotic" << endl;
    }
}