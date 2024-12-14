#include<stdio.h>

void inMang(int arr[],int n, int x, int y){
	if(x >= 0 && x < n){
		*(arr + x) = y;
	}else{
		printf("gia tri khong hop le\n");
	}
}
int main(){
	int a[]={1,2,3,4};
	int n = sizeof(a)/sizeof(a[0]);
	
	printf("Mang ban dau: ");
	for(int i = 0;i < n;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	
	inMang(a,n,1,6);
	printf("Mang sau:");
	for(int i = 0;i < n;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	
	
	return 0;
}
