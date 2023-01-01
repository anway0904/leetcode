class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        bool flag=0;
        if(nums.size()==0 || nums.size()==1 && val==nums[0]) return 0;

        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i] == val)
            {   
                flag = 1;
                for(int j=i+1 ; j<nums.size() ; j++)
                {
                    if(nums[j] != val) 
                    {   
                        swap(nums[i], nums[j]);
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag) break;
            k+=1;
        }
        for(auto i:nums)
        {
            cout << i << endl;
        }
        return k;
    }
};
