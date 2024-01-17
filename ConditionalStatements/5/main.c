#include <stdio.h>
#include <stdlib.h>

int main() {
    int edge;
    printf("Please enter the edge of the square: ");
    scanf("%d", &edge);
    edge <= 0 && printf("The edge must be a positive number!") && exit;
    printf("\nThe perimeter of the square is %d", edge * 4);
    printf("\nThe area      of the square is %d", edge * edge);
}