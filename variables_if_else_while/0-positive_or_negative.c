#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
	printf("the number is positif")
	}
	else if (n=0)
	{	
	printf("the numbre is zero")
	}	
        else if(n<0)
	{	
	printf("the number is negative")
	}	
	return (0);
}
