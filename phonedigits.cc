#include<iostream>
#include<string.h>
using namespace std;

const char hashmap[10][4] = {{},{},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};

void printRecursive(int currdigit,int a[],int n,char output[]){
	if(currdigit == n)
	{
		cout<<output<<" ";
		return;
	}
	for(int i=0;i<strlen(hashmap[a[currdigit]]);i++){
		output[currdigit] = hashmap[a[currdigit]][i];
		printRecursive(currdigit+1,a,n,output);
	}		
}

void printString(int a[],int size)
{
	//cout<<a;	
	char result[10]="\0";
	printRecursive(0,a,size,result);
}


int main(){
	
	int input[] = {2,3,4};	
	printString(input,3);
	return 0;
}
