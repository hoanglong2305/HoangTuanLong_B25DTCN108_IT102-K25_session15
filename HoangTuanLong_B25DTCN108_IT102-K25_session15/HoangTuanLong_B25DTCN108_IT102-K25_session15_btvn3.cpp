#include <stdio.h>

int daonguocNumber(int number){
	int reverseNumber = 0;
	int surplusNumber;
	
	while (number > 0) {
        surplusNumber = number % 10;
        reverseNumber = reverseNumber * 10 + surplusNumber;
        number /= 10;
    }
    return reverseNumber;
}



int main() {
    int originalNumber, reverseResult;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &originalNumber);

    reverseResult = daonguocNumber(originalNumber);
    printf("So nguyen ban dau: %d\n", originalNumber);
    printf("So dao nguoc la: %d\n", reverseResult);

    return 0;
}
