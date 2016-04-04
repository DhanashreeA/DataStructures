#include<iostream>
using namespace std;

int main(){
	int arr[] = {3,5,9,7,8,1,2,9,6},countn = 0,n = 9;
	for(int i=0;i<n;i++){
		if(arr[i] == n){
			countn++;
			arr[i] = 0;
		}	
	}
	for(int i=0;i<n;i++){
		if(arr[i]%n != 0)
			arr[(arr[i]%n)-1] += n;
	}
	for(int i=0;i<n-1;i++)
		cout<<"Number "<<i+1<<" appears "<<arr[i]/n<<" times."<<endl;
	cout<<"Number "<<n<<" appears "<<countn<<" times."<<endl;
	return 0;
}
