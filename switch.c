#include <stdio.h>

// Function to calculate length of string
int stringLength(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

// Function to count vowels in the string
int countVowels(char s[]) {
    int i = 0, count = 0;
    while (s[i] != '\0') {
        char ch = s[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
        i++;
    }
    return count;
}

// Function to copy string from source to destination
void copyString(char source[], char dest[]) {
    int i = 0;
    while ((dest[i] = source[i]) != '\0') {
        i++;
    }
}

int main() {
    char str[100], copied[100];
    int choice, cont;

    do {
         // To clear input buffer
        printf("\nEnter a string: ");
        getchar();
        fgets(str, sizeof(str), stdin);

        // Remove newline character from fgets
        int i;
        for ( i = 0; str[i]; i++) {
            if (str[i] == '\n') {
                str[i] = '\0';
                break;
            }
        }

        printf("\n--- MENU ---\n");
        printf("1. Length of the string\n");
        printf("2. Total number of characters\n");
        printf("3. Total number of vowels\n");
        printf("4. Copy the string\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of the string: %d\n", stringLength(str));
                break;

            case 2:
                printf("Total number of characters: %d\n", stringLength(str));
                break;

            case 3:
                printf("Total number of vowels: %d\n", countVowels(str));
                break;

            case 4:
                copyString(str, copied);
                printf("Copied string: %s\n", copied);
                break;

            default:
                printf("Invalid choice!\n");
        }

        printf("\nDo you want to continue? (1 = Yes / 0 = No): ");
        scanf("%d", &cont);

    } while (cont == 1);

    return 0;
}

