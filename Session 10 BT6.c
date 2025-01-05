#include <stdio.h>

int main()
{
	int arr[5] = {7, 8, 3, 4, 7};
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	int check = 0;
	int index[5];
	int count = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] == x) {
			printf("Phan tu %d ton tai trong mang tai vi tri %d\n", x, i);
			index[count] = i;
			count++;
			check = 1;
		}
	}
	if (check == 0) {
		printf("Phan tu %d khong ton tai trong mang\n", x);
	} else {
		printf("Phan tu %d ton tai trong mang tai cac vi tri: ", x);
		for (int i = 0; i < count; i++) {
			printf("%d ", index[i]);
		}
	}
	return 0;
}