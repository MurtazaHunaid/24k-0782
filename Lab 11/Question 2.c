/* Use two arrays; one for storing unique words, another for storing their counts 
Read words from the file and update counts directly in the arrays.
Display the results. */

#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LEN 50

int main() {
    FILE *file;
    char words[MAX_WORDS][MAX_LEN], word[MAX_LEN];
    int counts[MAX_WORDS] = {0}, word_count = 0, found, i;
    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Error! Could not open file\n");
        return 0; }
    while (fscanf(file, "%s", word) != EOF) {
        found = 0;
        for (i = 0; i < wordCount; i++) {
            if (strcmp(words[i], word) == 0) {
                counts[i]++;
                found = 1;
                break; } }
        if (!found && wordCount < MAX_WORDS) {
            strcpy(words[wordCount], word);
            counts[wordCount] = 1;
            wordCount++; } }
    fclose(file);
    printf("Word Frequencies:\n");
    for (i = 0; i < wordCount; i++) {
        printf("%s: %d\n", words[i], counts[i]); }
    return 0;
}