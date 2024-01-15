#include <stdio.h>
#include <math.h>

int main() {
    unsigned int input;
    printf("Please enter any integer: ");
    if (scanf("%u", &input) == 0)
    {
        printf("Accept positive number only!");
    }
    printf("%lf", sqrt((double) input));
}