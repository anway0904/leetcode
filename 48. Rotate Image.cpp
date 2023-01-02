class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int tmp = 0;

        //Transpose
        for(int i=0 ; i<n ; i++)
        {
            for(int j=i ; j<n ; j++)
            {
                tmp = matrix[i][j]; 
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = tmp;
            }
        }

        //Reflect
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<(floor(n/2)) ; j++)
            {
                tmp = matrix[i][j]; 
                matrix[i][j] = matrix[i][n-j-1];
                matrix[i][n-j-1] = tmp;
            }
        }
    }
};
