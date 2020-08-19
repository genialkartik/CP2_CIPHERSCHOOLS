class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
      vector<int> squares(A.size());
        int l = 0, r = A.size() - 1, p = A.size() - 1;
        while (l <= r)
            squares[p--] = pow(A[(abs(A[l]) > abs(A[r])) ? l++ : r--], 2);
        return squares;
    }
};
