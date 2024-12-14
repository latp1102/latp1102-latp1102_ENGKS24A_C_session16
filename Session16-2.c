#include<stdio.h>

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;

}
int main(){
	int a = 5;
	int b = 15;
   
    printf("gia tri ban dau: a = %d\n",a);
    printf("gia tri ban dau: b = %d\n",b);
    swap(&a, &b);
    printf("gia tri sau: a = %d\n",a);
    printf("gia tri sau: b = %d\n",b);
	return 0;
}
