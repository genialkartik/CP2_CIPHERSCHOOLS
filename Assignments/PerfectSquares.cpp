class Solution {
public:
    int numSquares(int n) {
        vector<int> temp(n + 1, INT_MAX);
        temp[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j*j <= i; j++){
              cout<<temp[i - j * j] + 1 << " - "<< temp[i] <<endl;
              temp[i] = min(temp[i - j * j] + 1, temp[i]);
            }
        }
        return temp[n];
    }
};
