#include <stdio.h>

/**
 * main - function to print combination of two numbers
 *
 * Return : 0 on success
 */

void putchar(char c);

void print_combinations(void) {
    int i, j;

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j <= 9; j++) {
            putchar(i + '0');
            putchar(j + '0');

            if (i != 8 || j != 9) {
                putchar(',');
                putchar(' ');
            }
        }
    }
}

int main(void) {
    print_combinations();
    return (0);
}

