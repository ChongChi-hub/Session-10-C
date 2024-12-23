#include <stdio.h>

int main()
{
    int arr[10] = {9, 7, 8 ,5, 1, 4, 6, 3, 2, 10};
    int size = sizeof(arr) / sizeof(int);
    
    printf("Truoc khi sap xep: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    for(int i = 1; i < size ; i++){
        int check = arr[i];
        int j = i - 1;
        for(; j >= 0 && check < arr[j]; j--){
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = check;
    }
    printf("\nSau khi sap xep: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
