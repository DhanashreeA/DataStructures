#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char arr[20] = "get   a  job\0";
	int i=0,count=0;
	for(i=0;i<strlen(arr);i++){
		if(arr[i] != ' ')
			arr[count++] = arr[i];
	}
 	arr[count] = '\0';
	cout<<arr<<endl;
	return 0;
}
