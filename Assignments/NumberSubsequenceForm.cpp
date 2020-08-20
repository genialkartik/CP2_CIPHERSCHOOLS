#include <bits/stdc++.h>
using namespace std;
int countSubsequences(string s)
{
    int l = 0, m = 0,n = 0;
    for (unsigned int i = 0; i < s.size(); i++) {
        if (s[i] == 'a')
            l = (1 + 2 * l);
        else if (s[i] == 'b')
            m = (l + 2 * m);
        else if (s[i] == 'c')
            n = (m + 2 * n);
    }
    return n;
}
int main() {
    string s = "abcabc";
    cout << countSubsequences(s) << endl;
    return 0;
}
