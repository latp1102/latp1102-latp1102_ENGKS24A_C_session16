#include<stdio.h>

int inMang(int arr[],int n,int x){
	for(int i = 0; i < n;i++){
		if(*(arr + i) == x){
			return i;
		}
	}
	return -1;
}
int main(){
	int a[]={1,2,4,5,6,7};
	int n = sizeof(a)/sizeof(a[0]);
	int x = 7;
	int b = inMang(a,n,x);
	
	if(b != -1){
		printf("phan tu %d co o vi tri %d trong mang\n",b,x);
	}else{
		printf("phan tu  %d khong co trong mang",x);
	}
	
	return 0;
}
