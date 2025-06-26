//WRITE A PROGRAM TO CREATE, READ, WRITE, AND APPEND DATA TO A FILE.
//TASK - 1, Q - 1

#include <stdio.h> 
#include <stdlib.h>

int main() {
    FILE *fptr; 
    char data[100]; 

    fptr = fopen("example.txt", "w");
    if (fptr == NULL) {
        printf("Error: Could not open file for writing!\n");
        exit(1); 
    }
    printf("--- Writing to file (example.txt) ---\n");
    printf("Enter some text to write: ");
    fgets(data, sizeof(data), stdin); 
    fprintf(fptr, "%s", data); 
    fclose(fptr); 
    printf("Text written successfully to example.txt\n\n");


    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file for reading!\n");
        exit(1);
    }
    printf("--- Reading from file (example.txt) ---\n");
    printf("Content of example.txt:\n");
    while (fgets(data, sizeof(data), fptr) != NULL) {
        printf("%s", data); 
    }
    fclose(fptr);
    printf("\nFile read successfully.\n\n");


    fptr = fopen("example.txt", "a");
    if (fptr == NULL) {
        printf("Error: Could not open file for appending!\n");
        exit(1);
    }
    printf("--- Appending to file (example.txt) ---\n");
    printf("Enter more text to append: ");
    fgets(data, sizeof(data), stdin); 
    fprintf(fptr, "%s", data); 
    fclose(fptr);
    printf("Text appended successfully to example.txt\n\n");


    
    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file for reading (after append)!\n");
        exit(1);
    }
    printf("--- Reading updated file (example.txt) ---\n");
    printf("Content of example.txt after appending:\n");
    while (fgets(data, sizeof(data), fptr) != NULL) {
        printf("%s", data);
    }
    fclose(fptr);
    printf("\nUpdated file read successfully.\n\n");


    fptr = fopen("example.txt", "w");
    if (fptr == NULL) {
        printf("Error: Could not open file for overwriting!\n");
        exit(1);
    }
    printf("--- Overwriting file (example.txt) ---\n");
    printf("Enter new text to overwrite the file: ");
    fgets(data, sizeof(data), stdin);
    fprintf(fptr, "%s", data);
    fclose(fptr);
    printf("File overwritten successfully with new text.\n\n");


    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file for reading (after overwrite)!\n");
        exit(1);
    }
    printf("--- Reading overwritten file (example.txt) ---\n");
    printf("Content of example.txt after overwriting:\n");
    while (fgets(data, sizeof(data), fptr) != NULL) {
        printf("%s", data);
    }
    fclose(fptr);
    printf("\nOverwritten file read successfully.\n\n");


    return 0;
}
