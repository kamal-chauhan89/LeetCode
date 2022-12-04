class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int p = nums.size()-1;
        for(int i=0 ; i<=p ; i++){
            if (nums[i]==target){
                return i;
            }
            else if (nums[i]>target){
                return i;
            }
            
        }
        return p+1;
    }
};