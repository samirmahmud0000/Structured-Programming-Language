#include <stdio.h>

void concat(char dest[], const char src[]) {
    int i = 0;
    
    while (dest[i] != '\0') {
        i++;
    }

    while ((dest[i++] = src++) != '\0');
}

int main() {
    char s1[50] = "Heyy ";
    char s2[] = "Prapty";

    concat(s1, s2);

    printf("Result: %s\n", s1);

    return 0;
}
