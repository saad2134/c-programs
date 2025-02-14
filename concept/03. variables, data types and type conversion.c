#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    double d = 20.1234;
    
    printf("Integer: %d\n", a);
    printf("Float: %f\n", b);
    printf("Character: %c\n", c);
    printf("Double: %lf\n", d);
    
    int converted = (int)b;
    printf("Converted Float to Integer: %d\n", converted);
    
    double sum = a + d;
    printf("Sum of Integer and Double: %lf\n", sum);
    
    return 0;
}
