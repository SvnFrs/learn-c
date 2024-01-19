#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);
    int spaces = input;

    for (int i = 1; i <= input; i++) {
        for (int j = spaces; j > 0; j--)
        {
            printf(" ");
        }
        for (int a = 0; a < i; a++) {
            if (a == i)
            {
                printf("*");
            }
            printf("* ");    
        }
        printf("\n");
        spaces--;
    }
}