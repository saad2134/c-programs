#include <stdio.h>

int main() {
    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the count of multiples: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", num * i);
    }
    printf("\n");
    
    return 0;
}
