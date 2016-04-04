#include<iostream>
using namespace std;



void printAnagram(int curdigit,char output[],char input[],int size){
	if(size == 1)
	{
		output[curdigit] = input[0];
		cout<<output<<" ";
	}
	char new_input[15] = "\0";
	int l=0;
	for(int i=0;i<size;i++){
		output[curdigit] = input[i];
		for(int j=0;j<size;j++){
			if(j != i)
				new_input[l++] = input[j];
		}
		printAnagram(curdigit+1,output,new_input,size-1);
		l=0;
	}
}

int main(){
	char result[20] = "\0";
	char arr[4] = {'a','b','c','d'};
	int n = 4;
	printAnagram(0,result,arr,4);
	return 0;
	
}
