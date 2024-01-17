#include <stdio.h>
#include <stdlib.h>

int main() {
    int first, second;
    printf("Please enter first number : ");
    scanf("%d", &first);
    printf("\n");
    printf("Please enter second number: ");
    scanf("%d", &second);
    second > first && printf("Comparison results: %d is greater than %d", second, first) && exit;
    second < first && printf("Comparison results: %d is less than %d", second, first) && exit;
    second == first && printf("Comparison results: Both number are equal") && exit;
}