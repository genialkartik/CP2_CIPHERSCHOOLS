// Stack STL

#include<bits/stdc++.h>
using namespace std;

int main(){
  stack <char> s;  // (((x)((x))))
    s.push(')');    s.push(')');    s.push(')');
    s.push('x');
    s.push('(');
    s.push(')');    s.push(')');
    s.push('x');
    s.push('(');    s.push('(');    s.push('(');    s.push('(');
    int count = 0;
    int max = 0;
    while (!s.empty())
    {
        if( s.top() == '('){
          count++;
        }
        else if( s.top() == ')')
          count--;
        cout<<s.top()<<" ";
        if(count>max){
            max = count;
          }
        s.pop();
    }
    if(count==0){
      cout<<endl<<"balanced"<<endl;
    }
    cout<<max;
}

// // Method 2
// #include <iostream>
// #include <stack>
// using namespace std;

// int parenthesis(string str) {
// 	int global_max = 0;
// 	int current_max = 0;
// 	stack<char> st;
// 	for(int i=0;i<str.size();i++) {
// 		if(str[i] == '(') {
// 			st.push('(');
// 			current_max++;
// 			if(global_max < current_max) {
// 				global_max = current_max;
// 			}
// 		} else if(str[i] == ')') {
// 			if(st.empty()) {
// 				return -1;
// 			}
// 			if(!st.empty() and st.top() == '(') {
// 				current_max--;
// 				st.pop();
// 			}

// 		} else {
// 			// Nothing
// 		}
// 	}
// 	if(current_max > 0) {
// 		return -1;
// 	}
// 	return global_max;
// }

// int main()
// {
// 	cout<<parenthesis("(((x)(())))");
// 	return 0;
// }
