//WRITE A PROGRAM TO CREATE, READ, WRITE, AND APPEND DATA TO A FILE.
//TASK - 1, Q - 1


#include <stdio.h>
#include <stdlib.h>

void createFile(const char *filename) {
    FILE *file = fopen(filename, "w");  // Open in write mode (creates file if it doesn't exist)
    if (file == NULL) {
        printf("Error creating file: %s\n", filename);
        return;
    }
    printf("File created successfully: %s\n", filename);
    fclose(file);
}

void writeFile(const char *filename) {
    FILE *file = fopen(filename, "w");  // Overwrites existing content
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "This is new content written to the file.\n");
    printf("Data written to file successfully.\n");
    fclose(file);
}

void appendFile(const char *filename) {
    FILE *file = fopen(filename, "a");  // Append mode
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return;
    }

    fprintf(file, "This line is appended to the file.\n");
    printf("Data appended to file successfully.\n");
    fclose(file);
}

void readFile(const char *filename) {
    char ch;
    FILE *file = fopen(filename, "r");  // Read mode
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    printf("\n File Content (%s):\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n");
    fclose(file);
}

int main() {
    const char *filename = "demo.txt";

    printf(" FILE OPERATIONS DEMO IN C \n\n");

    createFile(filename);     // Step 1: Create a file
    writeFile(filename);      // Step 2: Write to the file
    appendFile(filename);     // Step 3: Append data to the file
    readFile(filename);       // Step 4: Read and display contents

    return 0;
}

