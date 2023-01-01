class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.size()==1) return 1;

        int k = 1;
        int idx = 0;

        for(int i=1 ; i<nums.size() ; i++)
        {
            if(nums[idx] != nums[i])
            {
                idx += 1;
                nums[idx] = nums[i];
                k += 1;
            }
        }
        return(k);
    }
};
