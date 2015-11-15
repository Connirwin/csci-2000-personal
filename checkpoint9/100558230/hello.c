#include <stdio.h>

int main()
{
	/* only by replacing missing condition in if statement 
           marked by (...), bring output as "Hello world!" */ 
	if (!printf("Hola "))
             printf("Hola ");
	else
		printf("mundo!\n");

	return 0;
}

