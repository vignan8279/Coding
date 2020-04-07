class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int, int> arrmap;
        int count = 0;
        for(int i : arr){
            if(arrmap.find(i) == arrmap.end()){
                arrmap[i] = 1;
            }
            else arrmap[i]++;
        }
        for(auto el : arrmap){
             if (arrmap.find(el.first+1) != arrmap.end()) 
                count += el.second;
        }
        return count;
    }
};