#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);
    int spaces = input;

    for (int loop = 1; loop <= input; loop++) {
       for (int minus = spaces; minus > 0; minus--)
       {
            printf("  ");
       }
        for (int star = 0; star < loop; star++)
        {
            printf("*");
            if (star < loop - 1)
            {
                printf(" ");
            }
            
        }
        printf("\n");
        spaces--;
    }
}