#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,2,6,8,3,2,6,3,7,5},arr1[] = {0,0,0,0,0,0,0,0,0,0},i;
	for(i=0;i<10;i++){
		arr1[arr[i]-1]++;
	}
	for(i=0;i<10;i++){
		cout<<"Number "<<i+1<<" appeared "<<arr1[i]<<" times."<<endl;
	}
	return 0;
}
