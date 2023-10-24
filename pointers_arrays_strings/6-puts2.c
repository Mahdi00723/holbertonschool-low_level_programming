#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: void
  */

void puts2(char *str);

int main(void) 
{
    puts2("Holberton!");
    puts2("Lorem ipsum dolor sit amet, consectetur adipiscing elit.");
    puts2("");

    return 0;
}

void puts2(char *str) 
{
    for (int i = 0; str[i] != '\0'; i += 2) 
    {
        putchar(str[i]);
    }
    putchar('\n');
}
