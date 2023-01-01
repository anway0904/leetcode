class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.length()==0) return 0;
        if(s.length()==1) return 1;

        unordered_map<char, int> cmap;

        int l=0, r=0;
        int maxlen = 0;

        while(r<s.length())
        {
            cmap[s[r]]++;
            while(cmap[s[r]]>1) cmap[s[l++]]--;
            maxlen = max(maxlen, r-l+1);
            r++;
        }    
        return (maxlen);
    }
};
