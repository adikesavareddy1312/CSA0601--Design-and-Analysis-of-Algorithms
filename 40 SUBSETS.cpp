#include <stdio.h>

void printSubset(int arr[], int n, int mask) {
    for (int i = 0; i < n; i++) {
        if (mask & (1 << i)) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void generateSubsets(int arr[], int n) {
    for (int mask = 0; mask < (1 << n); mask++) {
        printSubset(arr, n, mask);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Subsets of the array:\n");
    generateSubsets(arr, n);

  return 0;
} 