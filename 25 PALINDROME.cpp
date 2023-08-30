#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindromeNumber(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

bool isPalindromeString(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    printf("Enter 'n' for number or 's' for string: ");
    char choice;
    scanf(" %c", &choice);

    if (choice == 'n') {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        
        if (isPalindromeNumber(num)) {
            printf("%d is a palindrome number.\n", num);
        } else {
            printf("%d is not a palindrome number.\n", num);
        }
    } else if (choice == 's') {
        char str[100];
        printf("Enter a string: ");
        scanf("%s", str);
        
        if (isPalindromeString(str)) {
            printf("%s is a palindrome string.\n", str);
        } else {
            printf("%s is not a palindrome string.\n", str);
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
