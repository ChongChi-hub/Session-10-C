#include <stdio.h>

int main() {
    int arr[10] = {9, 7, 8, 5, 1, 4, 6, 3, 2, 10};
    int size = sizeof(arr) / sizeof(int);
    printf("Truoc khi sap xep: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    for(int i = 0; i < size - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    printf("\nSau khi sap xep: ");
    for(int i = 0; i < size; i++){
     printf("%d ", arr[i]);
    }

    return 0;
}
