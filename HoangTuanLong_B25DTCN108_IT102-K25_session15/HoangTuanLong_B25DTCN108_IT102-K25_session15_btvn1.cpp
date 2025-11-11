#include<stdio.h>
#include<math.h>

int tinh_chenh_lech(int firstNumber, int secondNumber) {
    return abs(firstNumber - secondNumber);
}

int tinh_tich(int firstNumber, int secondNumber) {
    return firstNumber * secondNumber;
}

int main() {
    int numberA, numberB;
    int difference = 0;
    int product = 0;

    printf("Nhap so thu nhat: ");
    scanf("%d", &numberA);
    printf("Nhap so thu hai: ");
    scanf("%d", &numberB);

    difference = tinh_chenh_lech(numberA, numberB);
    printf("Chenh lech giua %d va %d la: %d\n", numberA, numberB, difference);

    product = tinh_tich(numberA, numberB);
    printf("Tich cua 2 so %d va %d la %d\n", numberA, numberB, product);

    return 0;
}
