#include <stdio.h>
#include <stdlib.h>

void totalNumber(int number){
    int sumNumber = 0;
    int surplusNumber
    int currentNumber = number;

    while(currentNumber > 0){
        surplusNumber = currentNumber % 10;
        sumNumber += surplusNumber;
        currentNumber /= 10;
    }
    return sumNumber;
}

int main() {
    int originalNumber;
    int totalSum;

    printf("Moi nguoi dung nhap so: ");
    if (scanf("%d", &originalNumber) != 1) {
        printf("Loi: Dau vao khong hop le.\n");
        return 1;
    }
    totalSum = totalNumber(originalNumber); 
    printf("Tong cac chu so cua so %d la %d\n", originalNumber, totalSum);

    return 0;
}
