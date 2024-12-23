#include <stdio.h>

int main()
{
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
    for(int i = 0; i < hang; i++){
        for(int j = 0; j < cot - 1; j++){
            for(int k = j + 1; k < cot; k++){
                if(arr[i][j] > arr[i][k]){
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
    printf("Ma tran sau khi sap xep theo tung dong:\n");
    for(int i = 0; i < hang; i++){
        for(int j = 0; j < cot; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}
