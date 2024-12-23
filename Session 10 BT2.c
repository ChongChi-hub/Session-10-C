#include <stdio.h>

int main()
{
    int numbers[5] = {4, 1, 7, 3, 5};
    int size = sizeof(numbers) / sizeof(int);
    
    printf("Mang chua sap xep: ");
    for(int i = 0; i < size; i++){
        printf("%d ", numbers[i]);
    }
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(numbers[j + 1] < numbers[j]){
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    printf("\nMang da sap xep: ");
    for(int i = 0; i < size; i++){
        printf("%d ",numbers[i]);
    }
    
    

    return 0;
}
