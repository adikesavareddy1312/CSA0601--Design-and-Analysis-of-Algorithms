#include <stdio.h>
#include <stdlib.h>

// Structure to represent an object
struct Object {
    int profit;
    int weight;
    float profitPerWeight; // profit-to-weight ratio
};

// Function to perform Knapsack using greedy approach
float knapsackGreedy(int n, struct Object items[], int capacity) {
    // Calculate profit-to-weight ratios
    for (int i = 0; i < n; i++) {
        items[i].profitPerWeight = (float) items[i].profit / items[i].weight;
    }

    // Sort items in descending order of profit-to-weight ratio
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (items[j].profitPerWeight < items[j + 1].profitPerWeight) {
                // Swap items
                struct Object temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }

    float totalProfit = 0.0;
    int remainingCapacity = capacity;

    for (int i = 0; i < n; i++) {
        if (remainingCapacity >= items[i].weight) {
            totalProfit += items[i].profit;
            remainingCapacity -= items[i].weight;
        } else {
            totalProfit += items[i].profitPerWeight * remainingCapacity;
            break;
        }
    }

    return totalProfit;
}

int main() {
    int n;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    struct Object items[n];

    printf("Enter the profits and weights of the items:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d: ", i + 1);
        scanf("%d%d", &items[i].profit, &items[i].weight);
    }

    int knapsackWeight;

    printf("Enter the knapsack weight: ");
    scanf("%d", &knapsackWeight);

    float maxProfit = knapsackGreedy(n, items, knapsackWeight);

    printf("Maximum profit that can be obtained using greedy approach: %.2f\n", maxProfit);

    return 0;
}
