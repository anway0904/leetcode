class Solution {
public:
    int mySqrt(int x) {
        
        if(x == 0) return 0;
        if(x == 1) return 1;

        int ans;
    
        for(long int i=1 ; i<=(x/2) ; i++)
        {
            if(i*i == x)
            {
                ans = i;
                break;
            }

            if(i*i > x)
            {
                ans = i-1;
                break;
            }
        }
        return ans;
    }
};
