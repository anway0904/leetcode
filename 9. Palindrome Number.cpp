class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || x%10 == 0 && x!=0) return 0;

        string s;
        int i, j, size_s;

        s = to_string(x);
        size_s = s.size();

        for(i=0 ; i<ceil(size_s/2) ; i++)
        {
            j = (size_s-1) - i;
            if(s[i] != s[j]) return 0;
        }
        return 1;
    }
};
