class Solution {
public:
    string intToRoman(int num) {
        int n[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        string r[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

        string ans;
        int i = 12;
        int div;
        while(num>0)
        {
            div = num/n[i];
            num = num % n[i];
            while(div--) ans += r[i];
            i--;
        }

        return ans;
    }
};
