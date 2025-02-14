#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of odd numbers to print: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1);
    }
    printf("\n");
    
    return 0;
}
