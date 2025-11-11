#include<stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    int swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    int arr[100]; 
    
    printf("Nhap so luong phan tu vao mang: ");
    scanf("%d", &size);
    printf("Nhap %d phan tu cua mang:\n", size);
    for (int i = 0; i < size; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nMang truoc khi sap xep: \n");
    printArray(arr, size);
    bubbleSort(arr, size); 

    printf("\nMang sau khi sap xep tang dan: \n");
    printArray(arr, size);

    return 0;
}
