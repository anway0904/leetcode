class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size(), index;
        vector<int> ans(n, 0);

        k = k % n;
        if(k==n || k==0) return;
        for(int i=0 ; i<n ; i++)
        {
            index = (i-k < 0)? i-k+n : i-k;
            ans[i] = nums[index];
        }

        nums = ans;
    }
};
