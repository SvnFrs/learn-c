#include <stdio.h>

int main() {
    int input;
    printf("Please enter any integer: ");
    scanf("%d", &input);

    if (input > 0)
    {
        printf("%d is a positive integer");
    } else if (input < 0)
    {
        printf("-%d is a negative integer");
    } else 
    {
        printf("The number entered is zero");
    }
}