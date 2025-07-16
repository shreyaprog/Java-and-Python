#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter the string to be reversed: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;  // Adjust length after removing '\n'
    }

    // Reverse the string **after** input is taken
    int i,j;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string is: %s\n", str);
    
    return 0;
}




