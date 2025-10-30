#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int charCount = 0, wordCount = 0;
    int inWord = 0;

    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("File does not exist or cannot be opened.\n");
        return 0;
    }

    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }
    }

    fclose(file);

    printf("Total characters: %d\n", charCount);
    printf("Total words: %d\n", wordCount);

    return 0;
}
