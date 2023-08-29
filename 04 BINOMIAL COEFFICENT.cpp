#include <stdio.h>

int binomialCoefficient(int n, int k) {
	int i,j;
    if (k == 0 || n == k)
        return 1;

    int dp[k+1];
    for ( i = 0; i <= k; i++)
        dp[i] = 0;

    dp[0] = 1;

    for (i = 1; i <= n; i++) {
        for (j = k; j > 0; j--) {
            dp[j] = dp[j] - (i - 1) * dp[j - 1] + i * dp[j];
        }
    }

    return dp[k];
}

int main() {
    int n, k;
    printf("Enter values for n and k: ");

    if (scanf("%d %d", &n, &k) != 2) {
        printf("Illegal input\n");
        return 1;
    }

    if (n < 0 || k < 0 || k > n) {
        printf("Illegal input\n");
        return 1;
    }

    int result = binomialCoefficient(n, k);
    printf("%dC%d = %lld\n", n, k, result);

    return 0;
}
