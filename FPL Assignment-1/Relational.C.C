#include <stdio.h>

int main() {
    int x = 20;
    int y = 10;



    // Comparison Operators with if statements
    if (x == y) {
        printf("x is equal to y (%d == %d)\n", x, y);
    } else {
        printf("x is not equal to y (%d != %d)\n", x, y);
    }

    if (x != y) {
        printf("x is not equal to y (%d != %d)\n", x, y);
    } else {
        printf("x is equal to y (%d == %d)\n", x, y);
    }

    if (x > y) {
        printf("x is greater than y (%d > %d)\n", x, y);
    } else {
        printf("x is not greater than y (%d <= %d)\n", x, y);
    }

    if (x < y) {
        printf("x is less than y (%d < %d)\n", x, y);
    } else {
        printf("x is not less than y (%d >= %d)\n", x, y);
    }

    if (x >= y) {
        printf("x is greater than or equal to y (%d >= %d)\n", x, y);
    } else {
        printf("x is not greater than or equal to y (%d < %d)\n", x, y);
    }

    if (x <= y) {
        printf("x is less than or equal to y (%d <= %d)\n", x, y);
    } else {
        printf("x is not less than or equal to y (%d > %d)\n", x, y);
    }

    return 0;
}