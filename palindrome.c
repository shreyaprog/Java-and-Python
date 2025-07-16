#include <stdio.h>
#include <string.h>

int palindrome(char str[]) {
    int len = strlen(str);

    // Remove newline character if present
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    int i;
    int j;
    for ( i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;  // Not a palindrome
        }
    }
    return 1;  // Is a palindrome
}

int main() {
    char str[100];

    // Get user input
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Check if the string is a palindrome
    if (palindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}


