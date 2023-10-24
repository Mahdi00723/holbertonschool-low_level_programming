#include "main.h"
#include <stdio.h>
#include <string.h>

void puts_half(char *str)
{
    int length = strlen(str);
    int half_length = length / 2;
    	if (length % 2 != 0) 
    {
        half_length++;
    }

    char half_str[half_length + 1];
   	 strncpy(half_str, str + length / 2, half_length);
   	 half_str[half_length] = '\0';

   		 printf("%s\n", half_str);
}
