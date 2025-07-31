#include <stdio.h>
#include <omp.h>

int main() {

    int n = 1000;
    int arr[n];
    int sum = 0;

    for(int i = 0; i<n; i++)arr[i] = i + 1;

    #pragma omp parallel for schedule(auto)
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }

    printf("Sum with static schedule is %d\n", sum);
    
    return 0;
}

