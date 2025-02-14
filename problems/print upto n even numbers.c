#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of even numbers to print: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", 2 * i);
    }
    printf("\n");
    
    return 0;
}
