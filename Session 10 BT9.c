#include <stdio.h>

int main() {
    int hang, cot;

    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);
    int arr[hang][cot];
    printf("Nhap gia tri cac phan tu trong mang:\n");
    for(int i = 0; i < hang; i++){
        for(int j = 0; j < cot; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < hang - 1; i++){
      for(int j = i + 1; j < hang; j++){
     if(arr[i][i] > arr[j][j]) {
                int temp = arr[i][i];
                arr[i][i] = arr[j][j];
                arr[j][j] = temp;
            }
        }
        }
    printf("Ma tran sau khi sap xep duong cheo chinh:\n");
    for(int i = 0; i < hang; i++){
        for(int j = 0; j < cot; j++){
         printf("%d ", arr[i][j]);
        }
    printf("\n");
    }

    return 0;
}
