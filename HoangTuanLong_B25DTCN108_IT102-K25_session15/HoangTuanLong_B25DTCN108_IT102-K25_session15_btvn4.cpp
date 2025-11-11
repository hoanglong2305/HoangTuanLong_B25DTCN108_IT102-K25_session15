#include<stdio.h>

int calculateSum(int arr[], int size) {
    int sum = 0;
    int i;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[100]; 
    int n, i;
    int sum;

    printf("Nhap so phan tu vao mang: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    sum = calculateSum(arr, n);
    printf("\nTong tat ca cac phan tu trong mang la: %d\n", sum);

    return 0;
}
