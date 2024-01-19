#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);

    for (; input > 0; input--) {
        for (int j = 0; j < input; j++)
        {   
            if (j == input)
            {
                printf("*");
                break;
            }
            printf("* ");
        }
        printf("\n");
        
    }
}