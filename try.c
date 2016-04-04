#include<stdio.h>
struct s1{
	char a[7];
	int *d;
	int c;
};

int main(){
	struct s1 s;
	printf("%d",sizeof(s));
	return 0;
}
