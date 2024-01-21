#include <stdio.h>

int main() {
    int width, height;
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter height: ");
    scanf("%d", &height);

    int area = width * height;
    printf("Area: %d\n", area);
    int perimeter = 2 * (width + height);
    printf("Perimeter: %d\n", perimeter);
}