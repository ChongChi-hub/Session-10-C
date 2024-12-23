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

    for(int j = 0; j < cot; j++){
        for(int i = 0; i < hang - 1; i++){
        int minIndex = i;
           for(int k = i + 1; k < hang; k++){
               if(arr[k][j] < arr[minIndex][j]) {
                    minIndex = k;
                }
            }
            if(minIndex != i) {
                int temp = arr[i][j];
                arr[i][j] = arr[minIndex][j];
                arr[minIndex][j] = temp;
            }
        }
    }
    printf("Ma tran sau khi sap xep theo tung cot:\n");
    for(int i = 0; i < hang; i++){
        for(int j = 0; j < cot; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
