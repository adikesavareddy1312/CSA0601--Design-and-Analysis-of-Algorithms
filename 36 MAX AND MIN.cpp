#include <stdio.h>
#include <limits.h>

void findTwoMin(int arr[], int n) {
    if (n < 2) {
        printf("Array should have at least 2 elements.\n");
        return;
    }

    int firstMin = INT_MAX;
    int secondMin = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < firstMin) {
            secondMin = firstMin;
            firstMin = arr[i];
        } else if (arr[i] < secondMin && arr[i] != firstMin) {
            secondMin = arr[i];
        }
    }

    if (secondMin == INT_MAX) {
        printf("There is no second minimum element.\n");
    } else {
        printf("The two minimum elements are: %d and %d\n", firstMin, secondMin);
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

    findTwoMin(arr, n);

   return 0;
}