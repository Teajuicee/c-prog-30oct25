#include <stdio.h>

int main() 
{
    FILE *file;
    char filename[100];
    long file_size;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }
    fseek(file, 0, SEEK_END);
    file_size = ftell(file); 
    fclose(file);

    if (file_size == 0)
        printf("The file is empty.\n");
    else
        printf("The file contains text (size: %ld bytes).\n", file_size);

    return 0;
}
