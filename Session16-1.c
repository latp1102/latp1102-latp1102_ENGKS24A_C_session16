#include<stdio.h>

int main(){
	int a = 5;
	int *ptr; 

	printf("gia tri 1 a = %d\n",&a);

	ptr = &a;
	printf("gia tri 2 a = %d\n",ptr);

	return 0;
}
