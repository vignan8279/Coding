class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(string s : strs){
            string curr = s;
            sort(curr.begin(), curr.end());
            mp[curr].push_back(s);
        }
        for(auto i : mp){
            vector<string> anssy(i.second.begin(), i.second.end());
            ans.push_back(anssy);
        }
        return ans;
    }
};