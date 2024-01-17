#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, perimeter;
    double area;

    printf("Enter the first side of triangle: ");
    scanf("%d", &a);
    printf("Enter the second side of triangle: ");
    scanf("%d", &b);
    printf("Enter the third side of triangle: ");
    scanf("%d", &c);
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("These three numbers must be a positive number!\n");
        return 1;
    }
    if (a + b > c && a + c > b && b + c > a) {
        perimeter = a + b + c;
        printf("Perimeter of triangle is %d\n", perimeter);

        double s = perimeter / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area of triangle is %f\n", area);
    } else {
        printf("Please enter valid sides of triangle.\n");
    }

    return 0;
}