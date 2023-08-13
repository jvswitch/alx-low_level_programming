#include <unistd.h>

void print_char(char c) {
    write(1, &c, 1);
}

void print_combinations(void) {
    int i, j;

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j <= 9; j++) {
            print_char(i + '0');
            print_char(j + '0');

            if (i != 8 || j != 9) {
                print_char(',');
                print_char(' ');
            }
        }
    }
}

int main(void) {
    print_combinations();
    return (0);
}

