#include <stdio.h>

size_t _strspn(const char *s, const char *accept) {
    size_t i = 0;
    int j;

    while (s[i] != '\0') {
        int found = 0;
        for (j = 0; accept[j] != '\0'; j++) {
            if (s[i] == accept[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            break;
        }
        i++;
    }
    return i;
}

size_t _strlen(const char *str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
