#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[100];
    
    printf("Length of str1: %lu\n", strlen(str1));
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    printf("Comparison result: %d\n", strcmp(str1, str2));
    
    return 0;
}
