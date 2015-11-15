#include <stdio.h>

int main()
{
	/* only by replacing missing condition in if statement 
           marked by (printf("Hello ") == false), bring output as "Hello world!" */ 
	if (true)
		printf("Hello ");
	else
		printf("world!\n");

	return 0;
}
