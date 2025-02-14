#include <stdio.h>

void globalFunction();

int globalVar = 10;

int main() {
    int localVar = 20;
    printf("Global Variable: %d\n", globalVar);
    printf("Local Variable: %d\n", localVar);
    globalFunction();
    return 0;
}

void globalFunction() {
    printf("Accessing Global Variable: %d\n", globalVar);
}
