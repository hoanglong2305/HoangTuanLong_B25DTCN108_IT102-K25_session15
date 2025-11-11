#include<stdio.h>

int repeatNumber(int number,int arr[100]){
	int minCount=number+1;
	int value = arr[0];
	int count;
	int i,j;
	for(i=0;i<number;i++){
		count = 1;
		for(j=i+1;j<number;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if (minCount > count){
			minCount = count;
			value = arr[i];
		}
	}
	printf("Phan tu xuat hien it nhat trong mang la: %d\n",value);
	printf("So lan xuat hien cua phan tu do la: %d\n",minCount);
	return value;
}
int main(){
	int number;
	int arr[100];
	int i;
	printf("nhap phan tu mang: ");
	scanf("%d",&number);
	for(i=0;i<number;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	repeatNumber(number,arr);
}
