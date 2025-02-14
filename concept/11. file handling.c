#include <stdio.h>

int main() {
    FILE *file;
    char data[100];
    
    file = fopen("example.txt", "w"); /* Same directory */
    fprintf(file, "Hello, File Handling in C!\n");
    fclose(file);
    
    file = fopen("example.txt", "r");
    fgets(data, 100, file);
    printf("Read from file: %s", data);
    fclose(file);
    
    return 0;
}
