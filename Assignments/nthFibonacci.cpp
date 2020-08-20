// class Solution {
// public:
//     int tribonacci(int n) {
//         if (n == 0)
//             return 0;
//         else if (n == 1)
//             return 1;
//         else if (n == 2)
//             return 1;
//         return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
//     }
// };

#include<bits/stdc++.h>
using namespace std;

int tribonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

int main(int argc, char const *argv[]) {
  cout<<tribonacci(35);
  return 0;
}
