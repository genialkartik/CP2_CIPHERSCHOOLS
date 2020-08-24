#include<iostream>
using namespace std;

// 5 ==>> 0 1 1 2 3

int main(){

	int n;
	cin>>n;

	int a=0,b=1,c=a+b,i=2;

	cout<<a<<'\n'<<b<<'\n';

	while(i<n){
		cout<< c<<endl;
		a = b;
		b = c;
		c = a+b;
		i = i + 1;
	}
	return 0;
}