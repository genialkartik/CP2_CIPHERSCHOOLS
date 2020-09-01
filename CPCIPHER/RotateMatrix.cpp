#include <bits/stdc++.h> 
#define N 4 
using namespace std; 

void displayMatrix( 
	int mat[N][N]); 

void rotateMatrix(int mat[N][N]) 
{ 
  for(int i = 0; i<N/2; i++){
        for(int j = i; j<N-i-1; j++){
            int temp = mat[i][j];
            mat[i][j] = mat[N-1-j][i];
            mat[N-1-j][i] = mat[N-1-i][N-1-j];
            mat[N-1-i][N-1-j] = mat[j][N-1-i];
            mat[j][N-1-i] = temp;
        }
    }
	// Anti-Clockwise
	
	//for (int x = 0; x < N / 2; x++) { 
		//for (int y = x; y < N - x - 1; y++) {
		//	int temp = mat[x][y]; 
			//mat[x][y] = mat[y][N - 1 - x]; 
			//mat[y][N - 1 - x] = mat[N - 1 - x][N - 1 - y]; 
			//mat[N - 1 - x][N - 1 - y] = mat[N - 1 - y][x]; 
			//mat[N - 1 - y][x] = temp; 
		//} 
	//} 
} 

// Function to print the matrix 
void displayMatrix(int mat[N][N]) 
{ 
	for (int i = 0; i < N; i++) { 
		for (int j = 0; j < N; j++) 
			printf("%2d ", mat[i][j]); 

		printf("\n"); 
	} 
	printf("\n"); 
} 

int main() 
{ 
	int mat[N][N] = { 
		{ 1, 2, 3, 4 }, 
		{ 5, 6, 7, 8 }, 
		{ 9, 10, 11, 12 }, 
		{ 13, 14, 15, 16 } 
	}; 

	rotateMatrix(mat); 
	displayMatrix(mat); 

	return 0; 
} 
