#include <bits/stdc++.h>
using namespace std;
int lcs(string str){
    int n = str.length();
    int ar[n+1][n+1];
    for (int i=0; i<=n; i++)
        for (int j=0; j<=n; j++)
            ar[i][j] = 0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (str[i-1] == str[j-1] && i != j)
                ar[i][j] =  1 + ar[i-1][j-1];
            else
                ar[i][j] = max(ar[i][j-1], ar[i-1][j]);
        }
    }
    return ar[n][n];
}
int main(){
    string str = "aabbdrwdqmld";  // 4 = aa bb dd dd
      cout << lcs(str);
    return 0;
}
