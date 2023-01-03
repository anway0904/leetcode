class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int len = strs[0].length();
        int count = 0;
        if(!len) return 0;

        for(int i=0 ; i<len ; i++)
        {
            for(int j=0 ; j<strs.size()-1 ; j++)
            {
                if(int(strs[j+1][i]) < int(strs[j][i]))
                {
                    count += 1;
                    break;
                }
            }
        }
        return count;
        
    }
};
