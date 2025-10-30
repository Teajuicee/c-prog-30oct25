#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;
    printf("Enter the file name: ");
    scanf("%s", filename);
    fp = fopen(filename, "r"); 

    if (fp == NULL)
    {
        printf("Error: Could not open the file.\n");
        return 1;
    }
    printf("\nContents of the file %s are:\n\n", filename);

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch); 
    }
    printf("\n");
    fclose(fp); 
    return 0;
}
