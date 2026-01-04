#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int m=matrix.size(),n=matrix[0].size();
	vector<int>c(m,0);
	vector<int>r(n,0);
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(matrix[i][j]==0){
					c[i]=1;
					r[j]=1;
				}
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(r[j]==1||c[i]==1) matrix[i][j]=0;
			}
		}
	
}
