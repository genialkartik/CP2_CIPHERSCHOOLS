#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<string> dict = {"kar", "ka", "kartik", "ktik", "ktk"};
  string find_str = "kartikey";
  string ans = "";
  int tmax = 0;
  int n1 = find_str.length();
  for(string s: dict){
    int j = 0;
    int cmax = 0;
    int n2 = s.length();
    for(int i=0; i<n1 && j<n2; i++){
      if(s[j] == find_str[i]){
        cmax++;
        j++;
      }
    }
    if(cmax>tmax){
      tmax = cmax;
      ans = s;
    }
  }
  cout<<ans;
}
