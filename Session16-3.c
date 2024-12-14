#include<stdio.h>

void tinhTong(int x, int y,int *ketQua){
	*ketQua = x + y;
}
int main(){
	int a =8; int b=6; int tong;
	tinhTong(a,b,&tong);
	printf("gia tri %d",tong);
	
	return 0;
}
