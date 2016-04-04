#include<iostream>
using namespace std;

void quickSort(int arr[], int left, int right){
	int i = left, j = right,tmp,pivot = arr[(left+right)/2];
	while( i<= j){
		while(arr[i] < pivot)
			i++;
		while(arr[j] > pivot)
			j--;
		if(i <= j){
			tmp = arr[i];
			arr[i]  = arr[j];
			arr[j] = tmp;
			i++;j--;
		}
	}
	if(j > left)
		quickSort(arr,left,j);
	if(right > i)
		quickSort(arr,i,right);
}

int main(){
	int arr[] = {2,5,7,9,8,3,1,10};
	quickSort(arr,0,7);
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
