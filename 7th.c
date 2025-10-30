#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char word[100], longest[100];
    int maxLength = 0;

    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("File does not exist or cannot be opened.\n");
        return 0;
    }

    while (fscanf(file, "%s", word) != EOF) {
        int len = strlen(word);

        if (len > maxLength) {
            maxLength = len;
            strcpy(longest, word);
        }
    }

    fclose(file);

    if (maxLength == 0) {
        printf("File is empty or has no words.\n");
    } else {
        printf("The longest word is: %s\n", longest);
        printf("Length of the longest word: %d\n", maxLength);
    }

    return 0;
}