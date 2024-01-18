#include <stdio.h>
#include <stdlib.h>

int main() {
    int input;
    scanf("%d", &input);
    
    input <= 0 && printf("N must be greater than 0!") && exit;

    for (int i = 1; i <= input; i++)
    {
        printf("%d ", i);
        for (int j = i-1; j > 0; j--)
        {
            if (j == 1)
            {
                printf("%d", j);
                break;
            }
            printf("%d ", j);
        }
        printf("\n");
    }
}