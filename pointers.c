#include <stdio.h>

// Function to change the value
void changeValue(int *ptr) {
    *ptr = 100; // changes value at the address to 100
}

int main() {
    int num = 50; // initial value

    printf("Before function call, num = %d\n", num);

    changeValue(&num); // passing address of num

    printf("After function call, num = %d\n", num);

    return 0;
} 

