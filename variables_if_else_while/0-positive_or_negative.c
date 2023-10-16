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
	printf("le nombre est positif")
	else (n<0)
	printf("le nombre est negative")
	else (n=0)
	printf("le nombre egale a zero")	
	return (0);
}
