/*
 * Implement your solution in thi file
 *
 */

#define MAX_LINE_LEN 100

char* readString(char* fileName) {
    char* buffer = (char*)malloc(MAX_LINE_LEN + 1); // Allocate memory for the line

    if (buffer == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }





    char* mysteryExplode(const char* str) {
    int input_length = strlen(str);
    int exploded_length = (input_length * (input_length + 1)) / 2;
    char* result = (char*)malloc(exploded_length + 1);

    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
