#include <stdio.h>

int main() {
    char str1[100], str2[50];

    printf("Input first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Input second string: ");
    fgets(str2, sizeof(str2), stdin);

    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }
    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }

    printf("Concatenated string: %s%s\n", str1, str2);

    return 0;
}
