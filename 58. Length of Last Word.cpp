class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for (auto it = s.rbegin() ; it != s.rend(); ++it) 
        {
            if(*it == ' ' && count) break;
            if(*it != ' ') count += 1;
        }
        return count;
    }
};
