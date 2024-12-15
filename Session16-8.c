#include <stdio.h>

void reverseString(char *str, int length){
    char *begin = str;
    char *end = str + length - 1;

    while (begin < end) {
        char temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}

int main(){
    char inputString[100];

    printf("Nhap vao mot chuoi: ");
    fgets(inputString,100,stdin);

    int length = strlen(inputString);

    reverseString(inputString, length);

    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s", inputString);

    return 0;
}
