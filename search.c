#include <stdio.h> // printf
#include <string.h> // strlen
#include <stdlib.h> // atoi(char*)

int my_strlen(char*);
int search(char*, char);
int search2(char*, char);
char* search3(char*, char);

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Usage: ./hello s c\n");
        return 1;
    }
    
    char* s = argv[1];
    char c = argv[2][0];

    printf("%c\n", search3(s, c));
    return 0;
}

int my_strlen(char* s) {
    int size = 0;
    while (*s++ != '\0')
        size++;
    return size;
}

int search(char* s, char c) {
    while (*s++ != '\0') {
        if (*s == c)
            return 1;
    }
    return 0;
}

int search2(char* s, char c) {
    while (*s++ != '\0') {
        if (*s == c)
            return strlen(++s);
    }
    return 0;
}

char* search3(char* s, char c) {
    while (*s++ != 0) {
        if (*s == c)
            return s;
    }
    return NULL;
}
