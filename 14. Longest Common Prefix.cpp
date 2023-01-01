class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans;        

        ans = strs[0];
        for(int i=1 ; i<strs.size() ; i++)
        {   
            if(strs[i]=="") return "";

            while(strs[i].rfind(ans, 0) == string::npos)
            {
                ans.erase(ans.size() - 1);
            }
        }
        return ans;
    }
};
