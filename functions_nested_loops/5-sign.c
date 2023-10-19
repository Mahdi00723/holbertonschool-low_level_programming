#include <main.h>

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

