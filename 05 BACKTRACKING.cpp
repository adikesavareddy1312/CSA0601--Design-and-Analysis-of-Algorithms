#include <stdio.h>

void print_subset(int subset[], int size) {
	int i;
    printf("Subset is (");
    for (i = 0; i < size; i++) {
        printf("%d", subset[i]);
        if (i < size - 1) {
            printf(",");
        }
    }
    printf(")\n");
}

void subset_sum_backtracking(int set[], int size, int target_sum, int subset[], int subset_size, int index) {
    if (target_sum == 0) {
        print_subset(subset, subset_size);
        return;
    }
    
    if (index >= size || target_sum < 0) {
        return;
    }
    
   
    subset[subset_size] = set[index];
    subset_sum_backtracking(set, size, target_sum - set[index], subset, subset_size + 1, index + 1);
    
   
    subset_sum_backtracking(set, size, target_sum, subset, subset_size, index + 1);
}

int main() {
	int size1,set1[15],sum1,i;
	printf("enter the size:");
	scanf("%d",&size1);
	printf("enter a set:");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&set1[i]);
	}
	printf("enter the sum:");
	scanf("%d",&sum1);
    int subset1[size1];
    subset_sum_backtracking(set1, size1, sum1, subset1, 0, 0);
    
    return 0;
}
