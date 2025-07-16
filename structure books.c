#include <stdio.h>

struct Book {
    char title[50];
    int pages;
};

int main() {
    struct Book library[3] = {
        {"C Programming", 250},
        {"Data Structures", 400},
        {"Algorithms", 350}
    };

    int maxPages = library[0].pages;
    int index = 0;
     int i;
    for ( i = 1; i < 3; i++) {
        if (library[i].pages > maxPages) {
            maxPages = library[i].pages;
            index = i;
        }
    }

    printf("The book with the most pages is: %s\n", library[index].title);

    return 0;
}

