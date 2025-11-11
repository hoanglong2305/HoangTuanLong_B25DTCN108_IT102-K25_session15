#include<stdio.h>

int binarySearch() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[100];
    int i;
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == x) {
            return mid;
        }else if (arr[mid] < x) {
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int result;

    result = binarySearch();
    if (result == -1)
        printf("Khong tim thay phan tu trong mang");
    else
        printf("Tim thay tai chi so: %d", result);

    return 0;
}
