#include <stdio.h>
#include <omp.h>

int main() {
    int n = 10;
    int product = 1;
    int arr[n];

    for(int i = 0; i < n; i++) arr[i] = i + 1;

    #pragma omp parallel for reduction(*:product)
    for (int i = 0; i < n; i++){
        product *= arr[i];
    }

    printf("Product is %d \n", product);

    return 0;
}