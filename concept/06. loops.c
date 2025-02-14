#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 5) {
        printf("While Loop: %d\n", i);
        i++;
    }
    
    for (int j = 1; j <= 5; j++) {
        printf("For Loop: %d\n", j);
    }
    
    int k = 1;
    do {
        printf("Do-While Loop: %d\n", k);
        k++;
    } while (k <= 5);
    
    return 0;
}
