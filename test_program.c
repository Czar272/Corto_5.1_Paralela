#include <stdio.h>
#include <omp.h>

int main() {
    int n = 10;
    int sum = 0;
    int arr[n];

    for (int i = 0; i < n; i++) arr[i] - i + 1;
    
    #pragma omp parallel

    {
        int id = omp_get_thread_num();
        printf("Hello from thread %d \n", id, omp_get_num_threads());
    }

    return 0;
}