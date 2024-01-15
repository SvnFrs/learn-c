#include <stdio.h>
#include <stdlib.h>

int main() {
    int first, second;
    printf("Please enter numerator  : ");
    scanf("%d", &first);
    printf("\n");
    printf("Please enter denominator: ");
    scanf("%d", &second);
    second == 0 && printf("The denominator can't be zero") && exit;
    printf("Result: %d / %d = %f", first, second, (float) first / second);
}