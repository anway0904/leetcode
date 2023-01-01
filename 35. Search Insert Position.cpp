class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        while(nums[i]<target) if((i++)==nums.size()-1) break;
        return i;
    }
};
