#include <stdio.h>

int print_sign(int n)
{
    if (n > 0)
    {
        printf("+");
        return 1;
    }
    else if (n == 0)
    {
        printf("0");
        return 0;
    }
    else
    {
        printf("-");
        return -1;
    }
}

int main(void)
{
    int num = 42; // Replace with the number you want to check
    int result = print_sign(num);

    printf("\n");
    
    if (result == 1)
    {
        printf("The number is greater than zero.\n");
    }
    else if (result == 0)
    {
        printf("The number is zero.\n");
    }
    else
    {
        printf("The number is less than zero.\n");
    }

    return 0;
}
In this code, the print_sign function takes an integer n as input, and it performs the following:

If n is greater than zero, it prints "+" and returns 1.
If n is zero, it prints "0" and returns 0.
If n is less than zero, it prints "-" and returns -1.
You can call the print_sign function with the number you want to check, and it will print the sign and return the corresponding value (1, 0, or -1) based on the sign of the input number.






