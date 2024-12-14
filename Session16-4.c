#include<stdio.h>

void inMang(int *arr,int x){
	for(int i = 0; i < x;i++){
		printf("arr[%d]=%d\n",0,*(arr + i));
	}
	printf("\n");
}
int main(){
	int a[]={1,2,3,4};
	int n = sizeof(a)/sizeof(a[0]);
	inMang(a,n);
	
	return 0;
}
