#include <stdio.h>

void xoaMang(int arr[], int x, int index){
    if (index >= 0 && index <= x){
        for (int i = x; i > index; i--){
            arr[i] = arr[i + 1];
        }
        x--;
    }
}

int main() {
    int a[] = {12, 20, 30, 40};
    int n = sizeof(a)/sizeof(a[0]);

    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }

    int index = 3;
    xoaMang(a,n,index);

    printf("\nMang sau: ");
    for (int i = 0; i < n - 1; i++){
        printf("%d\t", a[i]);
    }

    return 0;
}

