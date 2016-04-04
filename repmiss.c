#include<stdio.h>
#include<math.h>
int main(){
	int arr[] = {1,4,3,6,3,5};
	int i=0;
	for(i=0;i<6;i++){
		if(arr[abs(arr[i])-1] < 0)
			printf("Repeating number is:%d\n",arr[i]);
		else
			arr[abs(arr[i])-1] = arr[abs(arr[i])-1]*-1;
	}
	for(i=0;i<6;i++){
		if(arr[i] > 0)
			printf("Missing number is:%d\n",i+1);
	}
}
