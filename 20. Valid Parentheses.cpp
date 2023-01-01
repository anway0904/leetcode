class Solution {
public:
    bool isValid(string s) {
        if((s.size()%2 != 0) || (s[0]==')' || s[0]==']' || s[0]=='}') || 
                                (s.back()=='(' || s.back()=='[' || s.back()=='{')) return false;
        
        vector<char> brackets;

        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i]=='{' || s[i]=='(' || s[i]=='[') brackets.push_back(s[i]);

            else if (brackets.size() == 0) return false;
            else
            {   
                if (s[i] == ')' && brackets.back() == '(') brackets.pop_back();
                else if (s[i] == ']' && brackets.back() == '[') brackets.pop_back();
                else if (s[i] == '}' && brackets.back() == '{') brackets.pop_back();
                else return false; 
            }
        }
    if(brackets.size()>0) return false;
    return true;
    }
};
