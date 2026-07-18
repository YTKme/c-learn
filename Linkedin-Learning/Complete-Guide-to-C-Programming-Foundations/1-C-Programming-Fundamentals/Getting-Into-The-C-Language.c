#include <stdio.h>

int main() {
    printf("Getting Into The C Language\n");

    char string[] = "Greetings, Human!\n";
    int index;

    index = 0;
    while (string[index] != '\0') {
        putchar(string[index]);
        index++;
    }

    return (0);
}
