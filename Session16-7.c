#include<stdio.h>

void swap(int *x, int *y){
	int temp = *x;
	*x= *y;
	*y = temp;
}
void inMang(int arr[],int x){
	for(int i = 0; i < x - 1 ; i++){
		for(int j = 0;j < x - i - 1;j++){
			if(arr[j] > arr[j + 1]){
				swap(&arr[j],&arr[j + 1]);
			}
    	}
	}
}
int main(){
	int a[] ={4,2,9,3,1};
	int n = sizeof(a)/sizeof(a[0]);
	
	printf("Mang ban dau: ");
	for(int i = 0; i< n;i++){
		printf("%d",a[i]);
	}
	
	inMang(a,n);
	printf("\nMang sau: ");
	for(int i = 0; i< n;++i){
		printf("%d",a[i]);
	}
	return 0;
}

