#include <stdio.h>

void compute_cubes(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        int cube = (*(arr + i)) * (*(arr + i)) * (*(arr + i));  
        printf("Cube of element %d is: %d\n", *(arr + i), cube);
    }
}

int main() {
    int arr[10];

    printf("Enter 10 elements of the array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    compute_cubes(arr, 10);

    return 0;
}