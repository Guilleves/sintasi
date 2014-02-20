#include <stdio.h> // printf
#include <stdlib.h> // malloc

#define MAX_SIZE 100

int swap(char* text, char old_char, char new_char);

int main(int argc, char* argv[]) {
    char* text = malloc(sizeof(char) * (MAX_SIZE + 1));
    scanf("%s", text);
    char old_char = 'l';
    char new_char = 'x';
    printf("%d\n", swap(text, old_char, new_char));
    printf("%s\n", text);
    free(text);
    return 0;
}

int swap(char* text, char old_char, char new_char) {
    int swaps = 0;
    while (*text++ != '\0') {
        if (*text == old_char) {
            *text = new_char;
            swaps++;
        }
    }
    return swaps;
}

