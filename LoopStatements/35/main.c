#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);
    int star = input;
    int spaces = 0;

    for (int loop = 1; loop <= input; loop++) {
        for (int minus = 0; minus < spaces; minus++)
       {
            printf("  ");
       }
        for (int print = star; print > 0; print--)
        {
            printf("*");
            if (print > 1)
            {
                printf(" ");
            }
            
        }
        printf("\n");
        star--;
        spaces++;
    }
}