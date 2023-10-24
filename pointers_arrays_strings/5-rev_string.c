#include "main.h"
#include "string.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s) {
    int length = strlen(s);
    int i;
    for (i = 0; i < length / 2; i++) {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}

int main() {
    char s[] = "Hello, World!";
    printf("Original string: %s\n", s);
    rev_string(s);
    printf("Reversed string: %s\n", s);
    return 0;
}
