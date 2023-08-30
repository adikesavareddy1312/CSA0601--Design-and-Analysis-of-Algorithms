#include <stdio.h>
#include <string.h>
 
void palindrome(char [], int);
 
int main()
{
    char string[15];
 
    printf("Enter A String: ");
    scanf("%s", string);
    palindrome(string, 0);
    printf("%s",string);
 
    return 0;
}
 
void palindrome(char string[], int index)
{
    int len = strlen(string) - (index + 1);
    if (string[index] == string[len])
    {
        if (index + 1 == len || index == len)
        {
            printf("Palindrome\n");
            return;
        }
        palindrome(string, index + 1);
    }
    else
    {
        printf("Not A Palindrome\n");
    }
}