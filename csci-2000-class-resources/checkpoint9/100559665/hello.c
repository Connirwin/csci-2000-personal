#include <stdio.h>

int main()
{
	/* only by replacing missing condition in if statement 
           marked by (...), bring output as "Hello world!" */ 
	if (printf("Hello ") == 0)
		printf("Hello ");
	else
		printf("world!\n");

	return 0;
}
