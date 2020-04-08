class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0, j=0;
        int n = nums.size();
        while(i++ < n){
            if(nums[i-1]!=0){
                nums[j++] = nums[i-1];
            }
        }
        while(j<n){
            nums[j++] = 0;
        }
    }
};