#include<iostream>
using namespace std;

int main(){
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12}},n=3,m=4;
	int start = 0 ,col = m,row = n,i;
	while((col-start > 0) && (row-start > 0)){
		for(i = start;i < (start+col-1) ; i++){
			cout<<arr[start][i]<<" ";
		}
		int j;
		for(j = start; j<(start+row-1); j++)
			cout<<arr[j][i]<<" ";
		int k;
		cout<<"j :"<<j<<" ";
		for(k = start+col-1; k>start; k--)
			cout<<arr[j][k]<<" ";
		int l;
		for(l = (k+row-1); l>start; l--)
			cout<<arr[l][start]<<" ";
		cout<<endl;
		start++;
		row--;
		col--;    
	}

	return 0;
}

