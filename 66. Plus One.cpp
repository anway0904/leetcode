class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size()-1;
        bool carry = 0;

        while(n>=0)
        {
            digits[n] = (digits[n]==9)? 0:digits[n]+1;
            carry = (digits[n]==0)? 1:0;
            
            if(!carry) return digits;
            n--;
        }

        if(carry) digits.insert(digits.begin(), 1);
        return digits;
    }
};
