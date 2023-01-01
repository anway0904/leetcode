#include<string>

class Solution {
public:
    int romanToInt(string s) 
    {
        for(int i=0 ; i<s.length() ; i++)
        {
            if (s[i] == 'I') 
            {
                if(i+1 < s.length()) 
                {
                    if(s[i+1] == 'V') 
                    {
                        value += 4;
                        i++;
                        continue;
                    }
           
                    else if(s[i+1] == 'X') 
                    {
                        value += 9;
                        i++;
                        continue;
                    } 
                }
                value += I;
            }
            
            else if (s[i] == 'X') 
            {
                if(i+1 < s.length()) 
                {
                    if(s[i+1] == 'L') 
                    {
                        value += 40;
                        i++;
                        continue;
                    }
                    
                    else if(s[i+1] == 'C') 
                    {
                        value += 90;
                        i++;
                        continue;
                    } 
                }
                value += X;
            }
            
            else if (s[i] == 'C') 
            {
                if(i+1 < s.length()) 
                {
                    if(s[i+1] == 'D') 
                    {
                        value += 400;
                        i++;
                        continue;
                    }
                    
                    else if(s[i+1] == 'M') 
                    {
                        value += 900;
                        i++;
                        continue;
                    } 
                }
                value += C;
            }
            
            else if(s[i] == 'V')
            {
                value += V;
            }
            
            else if(s[i] == 'L')
            {
                value += L;
            }
            
            else if(s[i] == 'D')
            {
                value += D;
            }
            
            else if(s[i] == 'M')
            {
                value += M;
            }  
        }
        return value;
    }   
  
private:
    int I = 1;
    int V = 5;
    int X = 10;
    int L = 50;
    int C = 100;
    int D = 500;
    int M = 1000;
    int value = 0;
};
    
