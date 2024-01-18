#include <stdio.h>
#include <stdlib.h>

int main() {
    int input;
    scanf("%d", &input);
    
    input <= 0 && printf("N must be greater than 0!") && exit;

    for (int i = 1; i <= input; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
        
    }
    
    
}