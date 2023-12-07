#include <stdio.h>

void combineStrings(char result[], const char ext[]) {
    int index = 0;
    while (result[index] != '\0') {
        index++;
    }

    while ((result[index++] = ext++) != '\0');
}

int main() {
    char greeting[50] = "Heyy";
    char name[] = "Prapty";
    
    combineStrings(greeting, name);

    printf("Combined String: %s\n", greeting);

    return 0;
}
