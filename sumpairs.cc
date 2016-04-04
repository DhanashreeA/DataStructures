#include<iostream>
using namespace std;

int main(){
	//map <int, int> list;
	int arr[] = {5,6,4,6,6,7,5,2,2,4},XOR = 0,XOR1 =0, XOR2 = 0, a =1, position = 1;
	for(int i = 0; i<10; i++){
		XOR = XOR^arr[i];
	}	
	while(!(XOR & a)){
		a<<1;
		position++;
	}
	for(int i=0; i<10; i++){
		if((arr[i] & a))
			XOR1 = XOR1 ^ arr[i];
		else
			XOR2 = XOR2 ^ arr[i];
	}
	
	cout<<"Number 1:"<<XOR1<<"\tNumber 2:"<<XOR2<<endl;
}
