class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        bool isSmaller = 0;
        bool ansFlag = 0;
        bool isGreater = 0;
        bool signTarget = 0; //0 for -ve and 1 for +ve 
        
        for(int i=0 ; i<nums.size()-1 ; i++)
        {   
            isGreater = (nums[i] > target) ? 1:0;
            isSmaller = (nums[i] < target) ? 1:0;

            for(int j=i+1 ; j<nums.size() ; j++)
            {
                if(nums[j] < 0 && isSmaller) continue;
                if(nums[j] > 0 && isGreater) continue;

                if(nums[i] + nums[j] == target)
                {   
                    //cout<< nums[i] << nums[j] <<endl;
                    ans.push_back(i);
                    ans.push_back(j);
                    ansFlag = 1;
                    break;
                }

                if (ansFlag == 1) break;
            }
        }
        return(ans);
    }
};
