#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int spaceCount = 0;
    printf("Enter the file name: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("File does not exist or cannot be opened.\n");
        return 0;
    }
    while ((ch = fgetc(file)) != EOF) {
        if (ch == ' ') {
            spaceCount++;
        }
    }
    fclose(file);
    printf("Total number of spaces in the file: %d\n", spaceCount);
    return 0;
}

