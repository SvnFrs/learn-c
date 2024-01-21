#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("PLS ENTER U MTFK");
    int divident, divisor;
    scanf("%d %d", &divident, &divisor);
    divident == 0 ? printf("NO") : exit;
    divident % divisor == 0 ? printf("YES") : printf("NO");
}