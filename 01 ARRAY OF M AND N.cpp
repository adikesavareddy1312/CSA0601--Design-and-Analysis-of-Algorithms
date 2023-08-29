#include <stdio.h>

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, m;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of M: ");
    scanf("%d", &m);
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int nth_max = arr[n - m];  // M-th maximum is at index n - m
    int nth_min = arr[m - 1];   // N-th minimum is at index m - 1

    int sum = nth_max + nth_min;
    int diff = nth_max - nth_min;

    printf("M-th maximum number: %d\n", nth_max);
    printf("N-th minimum number: %d\n", nth_min);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);

    return 0;
}
