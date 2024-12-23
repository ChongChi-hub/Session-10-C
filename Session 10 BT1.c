#include <stdio.h>

int main()
{
    int numbers[5] = {4, 1, 7, 3, 5}, answer, check = 0;
    int size = sizeof(numbers) / sizeof(int);
     printf("Nhap vao phan tu bat ky: ");
     scanf("%d", &answer);
    for(int i = 0; i < size; i++){
        if(answer == numbers[i]){
            printf("Phan tu %d co trong mang tai vi tri %d.\n", answer, i);
            check = 1;
            break;
        }
    }
    if(!check){
        printf("Phan tu %d khong ton tai trong mang.\n", answer);
    }
     
     
    

    return 0;
}
