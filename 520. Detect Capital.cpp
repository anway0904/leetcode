class Solution {
public:
    bool detectCapitalUse(string word) {
        
        if(!(int(word[0]>=65) && int(word[0])<=90))
        {   for(int i=1 ; i<word.length() ; i++)
            {
                if(int(word[i])>=65 && int(word[i])<=90) return false;
            }
        }

        else
        {
            bool caps2 = (int(word[1])>=65 && int(word[1])<=90)? true:false;
            for(int i=2 ; i<word.length() ; i++)
            {
                if(caps2 && !(int(word[i])>=65 && int(word[i])<=90)) return false;
                else if(!caps2 && int(word[i])>=65 && int(word[i])<=90) return false;
            }
        }
        return true;
    }
};
