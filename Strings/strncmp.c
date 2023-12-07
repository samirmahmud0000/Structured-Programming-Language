#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char result[20];
    const char* firstPart = "Hey, ";
    const char* secondPart = "Prapty";

    sprintf(result, "%s%s", firstPart, secondPart);

    printf("Combined String: %s\n", result);

    return 0;
}
