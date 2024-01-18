#include <stdio.h>

int main() {
    int output = -999, count = 0;

    for (; output < -100; output++) {
        printf("%d, ", output);
        count++;

        if (count == 20) {
            printf("\n");
            count = 0;
        }
    }

    printf("%d\n", output);

    return 0;
}
