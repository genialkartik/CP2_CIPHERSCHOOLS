// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void add_to_vector(vector<int> &A,int x);


void sort_vector_asc(vector<int> &A);


void reverse_vector(vector<int> &A);

int size_of_vector(vector<int> &A);

void sort_vector_desc(vector<int> &A);

void print_vector(vector<int> &A);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		vector<int> A;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				int x;
				cin>>x;
				add_to_vector(A,x);
			}
			if(c=='b')
			{
				sort_vector_asc(A);
			}
			if(c=='c')
			{
				reverse_vector(A);
			}
			if(c=='d')
			{
				cout<<size_of_vector(A)<<" ";
			}
			if(c=='e')
			{
				print_vector(A);

			}
			if(c=='f')
			{
				sort_vector_desc(A);
			}

		}
cout<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete below methods*/

/*inserts an element x at
the back of the vector A */
void add_to_vector(vector<int> &A,int x)
{
    A.push_back(x);
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A)
{
	for(int i=0; i<A.size(); i++){
	    for(int j=i+1; j<A.size(); j++){
	        if(A[j]<A[i]){
	            int temp = A[j];
	            A[j]=A[i];
	            A[i]=temp;
	        }
	    }
	}
}

/*reverses the vector A*/
void reverse_vector(vector<int> &A)
{
    int n = A.size();
	for(int i=0; i<n/2; i++){
	    int temp = A[i];
	    A[i] = A[n-i-1];
	    A[n-i-1] = temp;
	}
}

/*returns the size of the vector  A */
int size_of_vector(vector<int> &A)
{
	return A.size();
}

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A)
{
	for(int i=0; i<A.size(); i++){
	    for(int j=i+1; j<A.size(); j++){
	        if(A[j]>A[i]){
	            int temp = A[j];
	            A[j]=A[i];
	            A[i]=temp;
	        }
	    }
	}
}

/*prints space separated
elements of vector A*/
void print_vector(vector<int> &A)
{
	for(int i=0; i<A.size(); i++){
	    cout<<A[i]<<" ";
	}
}
