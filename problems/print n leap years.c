#include <stdio.h>

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int n, year = 0, count = 0;
    printf("Enter the number of leap years to print: ");
    scanf("%d", &n);
    
    while (count < n) {
        if (is_leap_year(year)) {
            printf("%d ", year);
            count++;
        }
        year++;
    }
    printf("\n");
    
    return 0;
}
