#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    int original = num, sum = 0, digits = 0, remainder;
    while (original != 0) {
        original /= 10;
        digits++;
    }
    original = num;
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }
    return sum == num;
}

int main() {
    int n, count = 0, num = 1;
    printf("Enter the number of Armstrong numbers to print: ");
    scanf("%d", &n);
    
    while (count < n) {
        if (is_armstrong(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
    
    return 0;
}
